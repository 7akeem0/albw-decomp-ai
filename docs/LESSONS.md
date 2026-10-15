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
  We could not find a non-weak declaration that reproduces it.
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
