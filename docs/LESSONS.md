# Lessons: what worked, what did not

All numbers below were measured with the byte-exact checker on this game.

## What worked
- **Many independent per-function attempts, each verified by the compiler.** This produced most of the matched
  functions.
- **Twins.** A function byte-identical to a matched one, or identical except for constants and offsets, reuses that
  source with the values substituted.
- **Build flags per function.** About 850 functions only match with `--apcs=/fpic`, which never emits tail calls. Many
  matches that had used `weak` prototypes just to block a tail call became honest under `/fpic`.
- **Removing the hack and re-checking.** About 76 matches had used a `__schedule_barrier` or a dummy local that turned
  out to be unnecessary. Without it, the source still matched.
- **Batch compiling.** Passing many files to one compiler invocation was about 20x faster than one process per file.
  Output was identical in every order we tested (500 files, forward, reverse and shuffled), once object and section
  names no longer depended on the batch position.

## What did not work on the remaining functions
- **Lifting machine code to C, then repairing it locally.** On random unmatched functions: medium 18 of 233 (7.7%),
  large 1 of 119, huge 0 of 30. The lifted C is shaped like the machine code; the original source is not.
  Differences are coupled: control flow, value lifetimes and calling details change together, so small independent
  edits do not converge.
- **Learning rewrite rules from (lifted output, true source) pairs.** 0 reusable rules from 250 pairs.
- **Locking and transplanting single-entry/single-exit regions from matched functions.**
  - Transplants alone: the total byte difference fell by 65% (1,603 to 564), but 0 functions matched fully.
  - Per-region mixing of several lift variants: 0 new locked regions.
- **A constructor/destructor synthesiser.** 15 of 20 small ones (8-64 words) matched, but 0 of 40 larger ones.

## Measured compiler behaviour (armcc 4.1 b1049, from compiling test sources)
- `--apcs=/fpic` never emits a tail call. It also makes global data addresses pc-relative.
- A `weak` declaration of a callee stops tail calls to it. About 500 matches still need this. Their callees are never
  tail-called anywhere in the game, so the original headers probably declared something that has the same effect.
  We could not find a non-weak declaration that reproduces it. A systematic sweep of candidate constructs
  (2026-10-25, armcc -S, target shape `BL callee` + `POP` instead of tail `B`) eliminated: `__declspec(noinline)`
  (with or without `--apcs=/interwork`), discarded int return, variadic callee, `__softfp`, `--exceptions`,
  `--no_rtti`, `--Ospace`, `--no_inline`, `--no_autoinline`, `--no_early_inlining`, `--split_ldm`, `--no_split_ldm`,
  `--lower_ropi`, `--pointer_alignment=1`, `--shared`, `--no_rtti_data`, `--vfe`/`--no_vfe`,
  `__attribute__((interwork))` (ignored, warning #1207-D), `__interwork` keyword (does not compile), same-TU
  `__declspec(noinline) __inline` definition (emits a non-weak EXPORT but still tail-calls), `#pragma no_inline` +
  `__inline`, a large `__inline` body (fully inlined instead), a call inside an `if` block, an empty inline dtor
  local, and a dead-store dtor — none stop the tail call. Partial effects with the wrong shape:
  `__attribute__((noreturn))` callee gives `BL` but deletes the epilogue `POP`; a try/catch around the call gives
  `BL` but adds catch-handler machinery; a real call after the target call gives `BL`+`POP` but the trailing call
  is itself tail-called. One coupled effect remains unexplained: in func_0011F95C (manual dynamic_cast), a weak
  callee also turns the `__cxa_guard_release` call site into `mov r0,r0` while leaving its literal load intact;
  removing the release call without weak makes the diff worse. Do not re-test these; remaining hypotheses are
  (a) the original headers genuinely declared these callees weak (CTR-SDK hookables), which would make `weak`
  a faithful reconstruction, or (b) an unguessed build-system property (per-TU --via files, post-link patching).
- armcc 4.1 has **no coprocessor intrinsic**: `__mrc(15, 0, 13, 0, 3)` is treated as an implicit function
  (warning #223-D, emits `IMPORT __mrc`), and the shipped include tree has no mrc/mcr intrinsic header.
  The 82 `asm` hacks are all `mrc/mcr p15, …, c13/c0` TLS thread-pointer reads/writes (69+ are exactly
  `mrc p15, 0, t, c13, c0, 3`); the instruction is semantically required by the target bytes, so these cannot
  be de-hacked by construct substitution. The plausible honest resolution is that the original SDK headers
  used inline asm for TLS access — a project-level reclassification with evidence, not a per-function fix.
  No honest-matched source in the repo contains `__asm`.
- Temporaries and named locals give different code (store pairing, slot reuse). Stack frame offsets follow the
  declaration order.
- Constructors and destructors return `this`, and chains reuse the returned register. An inlined member destructor
  that only stores a vtable pointer is removed as a dead store.
- Floats are passed in VFP registers.

## The main blocker (the conclusion of a final small study)
For the remaining functions, the bytes reveal the calling-convention level reliably:
- the argument count, stack arguments included;
- the return type;
- the value on the failure path;
- the store order.

They do **not** reveal the exact source form of inlined helpers: constructors, setters taking parameters, reference
parameters, temporary objects, conversion operators. Each site leaves 2-3 plausible forms, and the sites interact.
The best lever is therefore a correct, shared header library of the game's small inline helpers and classes. Each
helper recovered correctly helps every function that uses it.

## Misses and open problems (current agents)

- func_00691F18 (16B): `vmov s0,r0; vcvt.u32.f32 s2,s0; vmov r0,s2; bx lr` — a
  softfp float->u32 conversion helper that uses s2 as the conversion scratch.
  armcc 4.1 b1049 emits `vcvt.u32.f32 s0,s0` from every C shape we tried
  (plain cast; forced temp; --Ospace; -O2; #pragma O2; ternary; sizeof; second
  int/pointer arg; two-float signature with either arg converted). It never
  allocates a second VFP register for this. Plausible explanations: a different
  armcc 4.1 build (b561+), or one of ARM's EABI conversion helpers
  (__aeabi_f2uiz-style) compiled from runtime source with a different
  toolchain or hand-written. Revisit if a build other than b1049 is pinned or
  a neighboring helper family (f2iz/d2iz/f2iz) shows the same s2 pattern.

- func_0041DCF4 (24B): `mov r2,#0; add r3,r0,#8; str r2,[r0]; strd r2,r3,[r0,#4];
  str r3,[r0,#0xc]; bx lr` — empty-list head init (count=cap=0, next=prev=&next).
  ~15 C source shapes tried (field order permutations, chained assignments, node
  temp, struct-copy of an 8-byte sub-struct, u64 shifted value, C++ ctor init
  list — inlines to nothing). armcc b1049 emits STRD for two adjacent u32 stores
  only when both values are already in registers with no intervening address
  computation (verified in matched 00102FB4: strd r0,r4,[r4,#4] for two in-reg
  args); otherwise it prefers STM+ADD or STR writeback tricks and never merges.
  The target's exact form (STRD at [#4] + MOV r2/ADD r3 allocation) was not
  reproduced; revisit with a C++-specific shape (e.g. out-of-line ctor, this
  pointer offset) or a different field-type hypothesis.
