---
name: decomp-manual
description: "Use this skill for manual ALBW decomp work beyond the standard loop: attacking deferred or near-miss functions (worklist.py report entries), specific hard functions named by the user, sweep/permuter work on stubborn shapes, and de-hacking existing hack matches."

---

# When to use this skill

- A `worklist.py report` near-miss entry worth attacking (the loop defers
  these; here you pick them up with expert techniques).
- A specific function the user names, however hard.
- De-hack re-checks of existing `hack` matches.

# Required reading first

- `docs/LESSONS.md` — the physics learned so far, including open
  problems. Do not repeat what it already rules out.
- The target's `history.jsonl` in `logs/refine/<addr>/` — what refine
  already tried and how close it got.

# Priorities (in order)

1. **Shared header library (highest leverage).** The main blocker is the
   shape of small inline helpers/classes from the game's own headers:
   inlined constructors, setters with parameters, temporary string
   objects, conversion operators. When you correctly recover one such
   helper and put it in `shared/include/`, many functions unlock at
   once. After matching a function, check whether its inline helper
   shapes generalize; promote them into shared headers.
2. **De-hack existing hack matches.** ~880 functions match only via
   forbidden tricks (weak 534, `__schedule_barrier` 243, asm 96).
   `--apcs=/fpic` never emits tail calls, which made many `weak` hacks
   honest, and about 76 barriers/dummies proved unnecessary on
   re-check (see LESSONS.md). Re-check a hack match honestly before
   writing any new function — it needs no reverse-engineering.
3. Functions blocking others (call targets of many unmatched functions).
4. Small/medium functions (higher chance of honest match; keeps
   momentum and builds the type/name corpus).
5. Large complex functions last.

# Expert workflow per function

1. Disassemble and study it:
   `python tools/fn.py show 0x<ADDR>`
   Note register usage, literal pools, call targets, and struct offsets.
   Cross-reference callees/callers to infer types and names.
2. Find structural twins: `python tools/dna.py query 0x<ADDR>` ranks
   registered functions by mnemonic-sequence and store-map similarity;
   their sources are starting points. `dna.py offset 0xNN` greps the
   pseudocode dumps for a struct-offset access.
3. Check the recipe corpus before compiling anything:
   `python tools/recipes.py query "<shape>"`. Positive recipes map a
   target shape to the winning construct + flags; negative recipes are
   hard skips — never burn compile budget on them.
4. Write the C/C++ source. Follow the existing `src/` layout and style;
   local `#include`s are relative to each file. Reuse `shared/include/`
   headers and existing matched sources — twin reuse is common here.
5. For stubborn diffs, sweep variants instead of guessing:
   `python tools/sweep.py <addr> <spec.py>` (spec: TEMPLATE with
   @@NAME@@ slots, GROUPS/GRID/BODY/FLAGS; output classifies each diff
   as OP = real instruction delta, REG = allocation-only,
   PERM = reordering).
6. Verify: `python tools/fn.py check <path> 0x<ADDR> --cc <cc>
   --flags "<flags>"` (some C++ members need `--sym <mangled-name
   substring>`). Iterate until `RESULT: MATCH`.
7. Register: update `functions.json` for that address — status `honest`
   (or `hack` with explicit `hack_reasons` if truly unavoidable — this
   should be rare). Keep the canonical flat format (see AGENTS.md).
   The worklist register command does this safely for new matches;
   hand-edits are acceptable for de-hacks and fixes of existing entries.

# Known hard shapes (what the loop defers, and the leads)

- `stm rX!, {...}` batching: scalar zero-stores never batch; the
  construct needs the pointer-reuse form (`p += N` writeback, cf.
  001066DC).
- A constant pinned to an unexpected register (zero in r2 instead of
  rematerialized r1): the `zero-loop-r2` recipe — a dead-eliminated
  `if (n) self->x = 0;` keeps the 2nd arg live at -O2 -Otime
  (00169A28, 003E60D4). Guard position × guarded value × flags is a
  sweep grid.
- Register-allocation-only deltas (OP=0 REG>0): statement order, local
  declaration order, and flags grid; full BODY permutation when the
  multiset already matches.
- Memfunc callers need no callee symbols: call targets are never
  compared (relocated words match on opcode class) — any extern name
  works, even into armlib asm (`__aeabi_memclr=0x1164F4`,
  `__aeabi_memclr4=0x110490`, memset wrapper `0x1164A8`, all
  `excluded_library`). See LESSONS.md#armlib.

# Quality bar

- Names must be meaningful and consistent with `shared/symbols.jsonl`
  and existing sources; don't invent conflicting names for the same
  struct or function — search the repo first.
- Types must be consistent across functions; prefer fixing a shared
  header over locally redefining shapes.
- Keep the code readable: this is source reconstruction, not just
  byte-matching. Avoid anything that compiles right but reads wrong.

# Reporting

For each function you finish, log: address, path, status (honest/hack +
reasons), what the function appears to do, and any helper/struct
recovered that could unblock others. If you abandon a function, log the
address, your best diff, and your hypotheses — in the commit message or
docs/LESSONS.md — so the next agent doesn't repeat your work.
