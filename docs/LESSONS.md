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
- A `return CONSTANT` on the null path of a guard (fn 003C8BB8, verified 8/8) emits
  `CMP r0,#0; LDREQ r0,=CONST; BEQ past_fallthrough; …; BX lr` + pool word. The
  pool word loads into the RETURN register and the branch skips to the trailing
  `BX lr`: i.e. the constant IS the return value. Same shape works for any
  error-code-returning accessor in front of a virtual dispatch `(*(Fn**)c)[i](c)`
  (emission: `LDR r1,[r0]; LDR r1,[r1,#i*4]; BX r1`).
- A guard `if (!c) c = &default_obj;` then dispatch emits `CMP r0,#0; LDREQ r0,=addr;
  LDR/LDR/BX` WITHOUT a BEQ (the dispatch is shared by both paths) — distinguishable
  from the error-code shape above by the missing `BEQ`.

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

## Misses and open problems

- `svc #N; bx lr` syscall stubs (e.g. 00100B88 svc#3, 0010D0EC svc#0x3c, five unindexed): armcc's
  documented `__svc(N)` construct is call-shaped — any wrapper compiles to `push {r4,lr}; svc #N;
  pop {r4,pc}` — never the frameless 2-word form the targets have. No known pure-C producer;
  likely SDK assembly or header inline-asm. Same for `ldr pc,[pc,#-4]; .word thumb_target`
  thunks (003C90C8 family): linker-generated ARM→Thumb veneers, not source functions. (current agents)

- `svc` write stubs (9× 24B, e.g. 00103C68, 0010EAE8): `str r0,[sp,#-4]!; svc #N; ldr r2,[sp];
  str r1,[r2]; add sp,#4; bx lr` — the arg is pushed to the stack, the svc returns a pointer in
  the stack slot, and r1 is stored through it. armcc's `__svc(N)` never produces stack-slot
  round-trips; variadic C can't reach svc. Skip as SDK assembly. (b24)
  Variant 0010BE9C (`push {r4,r5}; ldr r4,[sp,#8]; ldr r5,[sp,#0xc]; svc #0x22; pop; bx lr`)
  reads varargs off the stack into r4/r5 before svc — same SDK-asm family, skip.

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
  [RESOLVED 2026-10-26, honest, commit 4f31932, src/work8/nosrc/func_0041DCF4.c:
  `void f(struct R* s, unsigned n) { s->cap=0; s->n.next=&s->n.next; s->n.prev=0;
  s->y=s->n.next; if(n) return; }` with `struct R { unsigned cap; N n; void* y; }`,
  `typedef struct N { void* prev; void* next; } N;`, default flags.]
  STRD-PHYSICS (b1049, ~200 probe compiles):
  1. STRD at [r0,#4] with pair (0, addr) ONLY fires for a NESTED-STRUCT pair
     `N{void* prev; void* next;}` — plain sibling fields (same layout!) never merge
     (always 2×STR, sometimes `str [r0,#4]!` writeback).
  2. The pair address must be the BACK- or SELF-anchor `&s->n.next` (a field of the
     pair itself) — an address with two TEXTUAL uses (`next=&next; y=&next`)
     DOES NOT merge; the SECOND use must be a LOAD `s->y=s->n.next` written
     AFTER the pair statements. The load folds to the same register (no LDR),
     but schedules its STR last — giving the target's strd-then-str(+0xc) order.
  3. REG ALLOCATION: `mov r2,#0` first / `add r3,r0,#8` second needs a 2nd param
     `unsigned n` PLUS a provably-dead `if(n) return;` guard at the end (void fn).
     Without the dead branch: no STRD (STM via computed base, or writeback, or
     DCE-order changes). The dead branch changes block-boundary store batching.
  4. Statement order that wins: `cap=0; next=&next; prev=0; y=next-load;` —
     y-load LAST is essential; cap FIRST puts its STR before the STRD.
  Sizes: no return-this needed (void). Same trick family likely applies to other
  STRD-pair targets (00169A28 already honest via live-arg r2 trick).
- func_00169A28 RESOLVED honest (see lessons): `mov r2,#0; 4×str r2,[r0,#N]; bx lr`.
  The honest keep-producer for the r2-zero: a second parameter live across the zero-init
  (`if (n) self->m0 = 0;` — even dead) at -O2 -Otime. Context: vec-new element ctor
  (call site 0x16A454, element size 0x14, ctor ptr in r1, count in r3 via blx 0x100118).
  Lesson: grep literal refs (ptr table, literal pools) for the address FIRST — the call
  site gives the signature; brute-forcing register allocation blind wastes hours.
  ~15 C source shapes tried (field order permutations, chained assignments, node
  temp, struct-copy of an 8-byte sub-struct, u64 shifted value, C++ ctor init
  list — inlines to nothing). armcc b1049 emits STRD for two adjacent u32 stores
  only when both values are already in registers with no intervening address
  computation (verified in matched 00102FB4: strd r0,r4,[r4,#4] for two in-reg
  args); otherwise it prefers STM+ADD or STR writeback tricks and never merges.
  The target's exact form (STRD at [#4] + MOV r2/ADD r3 allocation) was not
  reproduced; revisit with a C++-specific shape (e.g. out-of-line ctor, this
  pointer offset) or a different field-type hypothesis.

- func_00560E5C (24B, unindexed, relocation-table resolver; callers pass
  (&stack_local_holding_relocated_base, idx)): `mov r2,#4; add r2,r2,r1,lsl#2;
  ldr r1,[r0]; ldr r0,[r1,r2]; add r0,r0,r1; bx lr` = `*(u32*)(*pp + 4 + idx*4) + *pp`.
  Unmatched after ~90 source shapes (g/m/i/j/k/n series, default flags + -O1/-O2/-O3/-Otime,
  fpic/norwpi/no_remove, softfp, all armcc 4.1 builds b561-b1454 sweep on i31).
  PHYSICS (b1049):
  * Plain/struct/volatile/commuted shapes all allocate base=*pp -> r0 (the dead
    pp's own register, same-reg load), off -> r1, value -> r1/r0 at add order.
  * Target's reverse allocation (off->r2 via MOV r2,#4 first, base->r1 reusing
    idx's register, value->r0) needs pp to stay live across the base load, which
    no honest source achieved: a second *pp use forces a reload (extra LDR),
    volatile forces base->r2 but then off->r0/r1 and order flips (base load first).
  * Guard-on-pp shapes (m01: `if (pp) return v+base; return v;`) give the exact
    order+regs (6/7 words) but keep `cmp r0,#0; addne` — armcc cannot fold a
    pointer null-check; guard-on-off/on-idx does not keep off in r2.
  * ADD commutativity is normalized in codegen (base+v == v+base identical).
  * Ordering: -O1/-O2 keep source order only with a separate off local declared
    first; -O3 hoists the base load first unless a condition pins pp.
  Best honest shapes for reference: i31 (`u8* bytes = (u8*)*pp; off local;
  *(u32*)(bytes+off) + (u32)bytes`) = same ops/op-order but base->r0;
  m01 -O2 guard = 6/7. Likely a different build/inline-asm; do not brute-force.

- VFP bulk-copy family in 0x115xxx (001151D8 getRot, 00115234, 001150B8, 001150CC,
  00115AC8): the codegen rules for b1049 VFP struct/array copies, established
  empirically (all with --cpu=MPCore, flags -O3 -Otime and -O2/-O3 +-Ospace/-Otime
  tested):
  * Bulk VLDM/VSTM of N regs comes from the **all-used float locals pattern**
    (v0..vN-1 = src[i]; dst[i] = vi) — see matched 001151EC (12/12) and 00115224.
  * Struct copies (direct or via tmp) always chunk at **8 regs max** ({s0-s7}
    twice); via-tmp 16-float copies give one merged {s0-s15} pair. C++ operator=
    memberwise goes **core regs** (LDR/STR), never VFP.
  * **Writeback (vldmia/vstmia rX!) only appears when a pointer variable is
    advanced between reads and used again** (p += 12; then read p[0..3] folds the
    WB into the first load), or **when the advanced pointer is returned** (return
    dst+16 folds vstmia r0!). Proof: matched 00115224. A dead advance is DCE'd
    (no WB); a second load from a *different* base never triggers WB on the
    first — 00115234 (`vldmia r1!,{s0-s11}; vldmia r2,{s12-s15}; vstmia r0`) is
    1 bit (W) away from the plain-locals form and no C shape produced that WB
    (indexed locals; p+=8/-index re-read; per-element *p++ — splits into 11
    single WB loads; b-loads-first; Ospace/Otime/O2 variants). Revisit only with
    a new WB mechanism idea.
  * **Dead loads are always eliminated**: unused floats (translation column of
    Mtx34 in getRot 001151D8) are never loaded at -O1/-O2/-O3 (-O1 keeps VLDR
    pairs only for *used* floats; -O0 goes core-regs + stack). The target's
    `vldmia r1,{s0-s11}` with s3/s7/s11 dead + 3 separate WB vstmia groups has
    **no honest C producer found**; likely hand-written asm or another armcc
    build. Do not brute-force again.
  * A **guarded 2-op VFP body is always predicated** (CMP; VLDMNE/VSTMNE; BX) —
    never the target's `CMP r1,r0; BXEQ LR; vldmia; vstmia; BX` branch form.
    Guard forms tried: if==return, if!=body, guard-in-loop, tmp vs direct copy,
    value-returning — all predicate (>=4-op bodies branch but then the copy
    chunk-splits at 8). 001150B8 unproducible; likely another build. `bxeq lr`
    normally means early-return guard with a prologue after it.

- 001150CC (15w) and 00115234 (4w): both need a **merged 12-float WB load
  (vldmia r1!,{s0-s11}) with NO subsequent use of the advanced pointer**.
  b1049 folds writeback only when the advanced pointer is used again (matched
  00115224/00115AC8: p += 12 between reads, or return of advanced dst).
  Contiguous p[0..11] reads + dead p += 12 gives NO WB; 3x4 row reads with
  p += 4 walks give 3 separate WB loads; per-element *p++ gives 12 single WB
  loads; loops split. 001150CC is otherwise 14/15 exact (scattered reversed
  stores + str r2 tag store at dst[1] all match). `--no_remove` does not exist
  in armcc 4.1. Revisit only with a new WB mechanism.

- 00115D70 (6w, `vldmia r1,{s1-s3}; vmul s4,s1,s0; vmul s5,s2,s0; vmul s6,s3,s0;
  vstmia r0,{s4-s6}; bx lr`, Vec3 scale-setMul): needs FRESH result regs s4-s6
  after a bulk 3-load, with operands s1-s3 dead after the muls. armcc b1049's
  allocator is forward-allocated (lowest free sreg): every source form (per-op
  stores; all-temps p/q/r; struct-copy tmp; aliasing branch guard; member fn;
  4-float w-load; dst==src check) emits in-place muls (s1*s1, s2*s2, s0*s3) and
  split stores (VSTR s0@8 + VSTM {s1-s2}). -O1 gives fresh s4-s6 ONLY with
  split VLDR loads (no bulk VLDM); -O2/-O3 give bulk load + in-place muls.
  The two mechanisms (fresh alloc + bulk load) never co-occur in b1049, and
  NOT in any 4.1 build (b561 spills via stack; b713-b1454 identical to b1049).
  b561 for simple shapes: 3x VLDR+VMUL in-place per-component, or all-locals
  3x VLDR {s1,s2,s3} + in-place. Likely hand-written asm or a build we don't
  have. Do not brute-force again. Scratch: $TMPDIR/v3/ v56-v74.

- Transform family 00115074 / 00115CA8 / 00115D18 (Mtx34 x Vec3, ~15-30w):
  targets bulk-load **all 12 matrix floats upfront** (vldmia r1,{s0-s11}) plus
  the 3-vector (vldmia r2,{s12-s14}), then 9 vmla/vmul + 3 scattered vstr —
  register allocation exactly follows declaration order (m->s0-s11, v->s12-s14,
  accumulators = the loaded translation regs s3/s7/s11). b1049 **rematerializes
  single-use float loads**: every source form tried (expression form; explicit
  chained +=; all-locals; struct-copy tmp M34 a = *m; loop over 3 rows; decl
  order m-first/v-after) and every flag combo (-O3/-O2/-O1, -Otime/-Ospace,
  --vectorize) interleaves 12 per-element VLDRs with the FMAs instead of one
  bulk VLDM. No matched function in the corpus combines bulk VLDM with
  VMLA/VMUL compute. This TU's style (upfront bulk load) may come from a
  different armcc build. The near-miss shape is: same FMA order (v-component
  outer, row inner), same accumulate-onto-translation semantics — only the
  load grouping differs.

- 0x100000-0x100B84 front block = CRT/startup (likely hand-asm or GCC): 
  - 00100000 (init chain, 9 words): bl x8 + bare `b` tail with NO lr save — the tail
    call to the svc stub with lr clobbered by the 8 bls is semantically broken, so
    it's not compiler-generated C. armcc's shape for the same source is either
    push{r4,lr}; bl x8; pop{r4,lr}; b (tail call needs the saved lr) or, with
    __declspec(noreturn) on caller or last callee, bl x9 with no saves (bl, not b).
  - 0010818C / 0010BFD4 (ldrex/strex sync primitives): 0010BFD4's else path runs
    clrex then FALLS THROUGH the section pad into the next function 0010BFFC —
    a linker-layout fall-through no compiler emits; 0010818C uses strex status
    ip with a dead ldrex dest r2, while armcc b1049 always reuses r2 for the
    status when ldrex's result is dead (status=ip only when ldrex value is live
    at the strex, e.g. matched 0010AE00). Both = kernel asm, skip.
- armcc b1049 loop transformation: `u32* p=start; while(p<end) *p++ = 0;` at
  -O3 -Otime becomes a counted unrolled loop (diff/8, str pairs, [r0,#8]!); at
  -O3 -Ospace it emits the naive `mov r2,#0; cmp r0,r1; strcc r2,[r0],#4; bcc`
  (this matched 00100024 — first -Ospace match in the project).
- fn.py comparator facts: BL->BLX by linker accepted when my word is bl with a
  call relocation ((tw>>25)==0x7D detects target blx-imm); tail `b` to next
  function turned into NOP (mov r0,r0) also tolerated via R_ARM_THM_JUMP24.

- 0010FC34 (strcmp-like, 13w): shape cracked but the range includes a trailing
  orphan data word 0x01010101 (no PC-relative load points at it from anywhere;
  linker-placed pool/constant). 12/13 words exact — the loop is
  `c1=*a++;c2=*b++; if (c1!=c2||c1==0) break;` x2 manually unrolled with armcc's
  flag fusion cmp r2,#1 / cmphs r2,r3 / bne (the fusion appears for &&/-condition
  forms; `||`-in-if compiles to separate cmp/beq pairs). Unproducible trailing
  constant -> skip. Also: armcc at -O3 -Otime does NOT auto-unroll this while
  loop; the unroll must be written in source.
- 0010F924 (struct zero init + (0,-1) STM pair, 13w): 11/13 near-miss. armcc
  -O3 -Otime allocates zero=r1, addr(+0x1c)=r3, minus1=r2; target has
  zero=r3, addr=r2, minus1=ip. -O3 -Ospace shifts to addr=ip, minus1=r3 (still
  zero=r1). No source form found that puts the first-materialized value in r3
  with r1 free; both callers unindexed (no signature oracle).

- 0010DA3C (64B polymorphic ctor with intrusive empty list head, near-miss, NOT
  brute-force orders again): target = `mov r2,#0; ldr r1,poolA(vtable); ldr
  r3,poolB(ro ptr); str r1,[r0]; strb r2,[r0,#4]; strd r2,r3,[r0,#8]; add
  r3,r0,#0x14; add r1,r0,#0x10; stm r3,{r1,r2}; str r1,[r0,#0x10]; str x3`. 
  Findings: (a) field x=0,y=&ro pair as plain assignments NEVER strd-merges in
  armcc at any level/order (~12 source permutations tried: flag/x/y/vptr orders,
  init-lists, temp-struct copy, -O2/-O3/-Otime/-Ospace); armcc always splits and
  hoists pool loads late with base-advance store tricks. (b) u64 field assigned
  `(u64)&ro << 32` DOES hoist both pool loads to the top (closest shape) but
  still splits the 64-bit store into two STRs (lo r1, hi r3) and puts the vptr
  store 6th. (c) compiler-inserted vptr store is NOT emitted first by armcc when
  the ctor body assigns fields (it schedules with the rest). Target's strd
  r2,r3 with lo=0/hi=pool remains unexplained (same family as 0041DCF4).
- 0010FC34 (52B strcmp-style fused loop, 12/13 words): target fuses
  `c1!=0 && c1==c2` into cmp r2,#1 + cmphs r2,r3 with 2x unroll (bne-exit then
  beq-loop). Plain `while (c1 != 0 && c1 == c2)` gives separate cmp/beq pairs
  (no fusion, no unroll); manual `if (c1 != c2 || c1 == 0) break;` unrolls but
  does not fuse. The last word 0x01010101 is orphan linker data (no PC-relative
  user anywhere in +-4KB) — unproducible trailing constant, function unmatchable
  as bounded.

- **Copy-variable blocks armcc's guard/copy subs-fold** (proof: matched 0010B380
  and oracle 0010A644): a source-level guard `if ((s32)n_arg <= 0) return;` on a
  param that stays live across a call otherwise compiles to
  `push; subs rX,n,#0; ble` (armcc fuses the callee-saved copy with the
  compare, placing the test INSIDE). Writing `u32 n = n_arg;` (an explicit copy
  local used afterwards) prevents the fuse and yields the pre-prologue exit
  `cmp rN,#0; bxle lr; push; ...; mov rS,rN`. A bare `(s32)` cast does NOT
  prevent the fold.
- **STM base reveals struct layout**: `stm r4,{r1,r5}` with NO base advance means
  the stored fields are at offset 0/4 of the base register; an adjacent
  `str r0,[r4,#8]` is a separate field at +8, NOT contiguous with the stm pair
  (stm has no offset encoding — offsets come only from base advance). When
  armcc instead 3-merges into one stm with `add base,#8`, your inferred layout
  is probably wrong.

- 0010D370 (MI ctor, 14/16): `D : B1, S` with B1 = 12-byte polymorphic
  primary {vptr,x,y} (inlined ctor), S = 0010DECC's class (out-of-line ctor at
  self+12, size 0x20C), members f1/f2 at +0x218/+0x21C zero-initialized.
  Everything matches EXCEPT the post-call vptr-pair allocation: target
  `ldr r1,[pool2=Dvt]; add r2,r1,#0x20` (forward order), armcc emits
  `ldr r2,[pool2]; add r1,r2,#0x20` (reverse order) in EVERY variant: plain
  6-virtual B1, B1-with-virtual-dtor, explicit base calls, body assignments,
  S with 3 virtuals, D overriding B1::v1, B1 ctor out-of-line, no_inline S
  ctor, --no_exceptions/--rtti/--vectorize, -O2 (different shape: pool reuse
  in r1 but self-add + pre-indexed no-WB store + wrong order), -O3 -Ospace,
  and ALL builds b561/b713/b791/b844/b894/b921/b1440/b1454. D adding a new
  virtual or virtual dtor APPENDS a vtable slot (secondary offset becomes
  0x24/0x28) and inlines S's ctor — wrong shape. armcc regalloc assigns
  registers at definition in reverse-definition order for this pair; no tested
  source form flips it. The target's pool→r1/add→r2 regpair DOES occur in a
  different context: 0010C51C's inline base-ctor `stm r0,{r1,r2}` (two
  adjacent vptrs at +0/+4, two near-empty polymorphic bases) — not
  transferable to a most-derived vptr-pair store after a BL.
  Scratch: $TMPDIR/mitest/{t1-t5,v1,v2,w1,w2,w5,m1,m2,x4,x5,x6}.cpp.

- **0010E250 MATCHED honest (17/17)** via a chain of discoveries — the recipe:
  (a) It is NOT a ctor but an init-method `D* D::initialize()` whose source
  literally returns `(D*)((char*)k - 0x24)` from the callee's return: that is
  what makes armcc emit `mov r4,r0 ... sub r0,r4,#0x24` (raw retval saved,
  this derived at the END). A C++ ctor instead remats this EARLY
  (`sub r4,r0,#0x24` right after the ctor BL then `mov r0,r4`) — the exact
  15/17 near-miss of the ctor interpretation.
  (b) The callee must be a member function returning its own `this`
  (`Key* Key::init()`), NOT a ctor: only then is the return value usable in
  source and chainable (`k->set(v)` reuses r0 from the BL directly).
  (c) **-O2 -Otime** is required (not -O3): at -O2, a LOCAL `u32 v = 0;`
  passed as a call arg is kept in a callee-saved reg across a BL
  (`mov r5,#0` early; `mov r1,r5` at the call). At -O3 the constant is
  re-materialized (`mov r1,#0`). b1049 otherwise ALWAYS remats literal call
  args; the local-variable-at--O2 form is the honest producer of
  keep-across-call + mov-copy (verified: 0 corpus oracles for keeping an
  immediate across a call).
  (d) The empty circular list stores come from a POINTER-LOCAL in the
  function body: `Node* p = &root; p->prev = p; count = 0; p->next = p;
  z = 0;` — this exact source order yields the target's
  `add r2(&root); tag-store; add r1(=prev/base, REUSING the pool reg);
  mov r5,#0; stm r1,{r2,r5}; str r2,[r0,#0x14]!; str r5,[r0,#0xc]!`
  sequence (stm merge + two-WB chase building &key). Every other authoring
  order loses the stm or the writeback chase.
  (e) push {r4,r5,r6,lr} = armcc pushes r6 (unused pad) whenever TWO
  callee-saved values are live (proof also 0010B380); one value → push {r4,lr}.
  (f) Pool loads for explicit `tag = (u32)ro[]` assignments hoist pre-push at
  -O2 -Otime only in this flat/init-method shape; in ctor shapes armcc sinks
  them late (cf. 0010DA3C open problem).
