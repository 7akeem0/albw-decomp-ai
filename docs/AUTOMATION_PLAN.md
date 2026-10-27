# Automation plan: agent-driven decompilation for small LLMs

Goal: reduce the per-function workflow to a few tool commands with
machine-readable output, so an agent with a *small* LLM can keep matching
functions without holding compiler-physics expertise in context. All expert
knowledge moves out of the agent's head and into tools + recipe data.

## Design contract (what makes it small-LLM-safe)

1. **One command = one decision.** Every tool prints a verdict and, when
   applicable, the suggested next command. The agent never improvises
   flag sets, construct classes, or mutation choices.
2. **Structured output.** Every tool supports `--json` with stable fields.
   The agent's job is to read a handful of fields, not disassembly.
3. **Budgets are built in, not chosen.** Probe budgets, job counts (`--jobs 1`
   on this device — see OOM note in LESSONS.md), and timeouts are defaults.
4. **Never trust, always verify.** Only `fn.py check`'s `RESULT: MATCH`
   registers a function. Every other stage is a *suggestion*.
5. **Idempotent and resumable.** Every stage writes state to disk; a crashed
   run (OOM, wine hang) must be restartable with no cleanup ceremony.

## Current state

| Piece | Status |
|---|---|
| `tools/triage.py` | done — candidate list, skip classes |
| `tools/sweep.py` | done — variant sweep + OP/REG/PERM classifier |
| `logs/pseudocode/` | done — 9,306 Ghidra dumps |
| `tools/dna.py` | done — index built (25,986), acceptance 20/20 + 7/7, `--json` everywhere |
| `tools/recipes.py` + `shared/recipes.json` | done — 13 entries (7 positive, 6 negative) |
| `tools/synth.py` | done — store-init class, DEFER otherwise; class coverage grows with use |
| `tools/refine.py` (phase 4) | done — closed-loop refiner, acceptance 5/5 reproduced from skeleton-only restart |
| `tools/queue.py` (phase 5) | done — next/register/report/status; first auto-registered match 003E60D4 |
| `AGENTS.md` | still written for an expert agent |

## Phases

### Phase 1 — Finish DNA index (dna.py)

- Complete `python tools/dna.py index` over all 25,986 starts.
- `dna.py query 0xADDR` prints ranked structural twins with their registered
  source paths, and emits `NEXT:` line with the suggested action
  (`twin:<path>` / `synthesize` / `defer`).
- `dna.py offset 0xNN` for struct-field type discovery stays.
- **Acceptance test:** for 20 known-matched functions, the real source's
  function ranks in the top-5 of its own query. Tune weights until it does.
- Add `--json` to all subcommands.

### Phase 2 — Recipe corpus (shared/recipes.json)

Machine-checkable encoding of everything LESSONS.md taught:

```json
{
  "id": "strd-merge",
  "shape": "two adjacent u32 stores into [rX,#k] merged to STRD",
  "requires": ["both values already in registers", "no intervening address computation"],
  "source": "two consecutive stores; second value anchored via &self->member",
  "flags": ["default"],
  "refs": ["LESSONS.md#strd", "00102FB4"]
}
```

Two kinds of entries:
- **positive recipes** — target shape → winning source construct + flags
  (seed from all honest matches: STRD pair via nested struct + self-anchor,
  keep-producer r2-zero via live 2nd arg at -O2, VLDM batching via all-used
  float locals, `p += N` WB only when pointer reused, etc.);
- **negative recipes** (hard skips) — shapes that are unproducible from C
  (svc stubs, mrc/mcr TLS ops, veneers, s2-scratch f2uiz, 00115234-style r1!
  writeback, guarded 2-op VFP predication). The synthesizer/queue checks
  these BEFORE burning a compile.

A small tool `tools/recipes.py add|query <dna-shape>` keeps the corpus
queryable; LESSONS.md stays the human-readable mirror.

### Phase 3 — Skeleton synthesizer (tools/synth.py)

`python tools/synth.py 0xADDR` → writes `src/work8/synth/func_XXXX.c` (or
reports `UNPRODUCIBLE` if a negative recipe matches).

Source of truth, in order: disassembly store-map (byte-accurate) > call-list
+ pool refs > Ghidra pseudocode (semantic hints only — known to miss tricks
like dead-arg liveness). Synthesized classes, smallest-first:

1. **store-init** — `self->f = v;` lines from the store-map
   (`c0`→0, `aN`→`&self->member`, `l`→load, `x`→call result).
2. **getter/setter wrappers** — `mov r4,r0; bl helper; mov r0,r4` family.
3. **table lookups** — pool-ref + index scaling.
4. **tail thunks** — argument-preserving `b target`.
5. **arith/logic leaves** — mnemonic sequence → expression guess
   (byteswap, min/max, masks), refined by sweep.

Output includes the ready-to-run `sweep.py` spec, so phase 4 is one command.

### Phase 4 — Closed-loop refiner (tools/refine.py)

`python tools/refine.py 0xADDR --budget 60` — wraps sweep.py with
diff-class-driven mutation, no hand-written specs:

- starts from a twin source (dna) or a synthesized skeleton (synth);
- loop until MATCH or budget exhausted:
  - `REG`-class best → mutate statement order / locals decl order / flags
    grid (-O2, -O3±Otime, per-function flag variants from functions.json
    neighbors) / known liveness tricks from recipes;
  - `PERM`-class best → full BODY permutation sweep;
  - `OP`-class best → swap construct class (store form, guard form, helper
    style) per recipes;
- every new best is written to `logs/refine/<addr>/best.c` + `state.json`
  (resumable), each iteration appends to `history.jsonl`.

**Acceptance:** reproduce ≥5 known honest matches from skeleton-only
restart (drop the original source, regenerate, refine to MATCH).

### Phase 5 — Queue driver (tools/queue.py)

`python tools/queue.py next` — the *only* command a small agent needs:

```
$ python tools/queue.py next
CANDIDATE 0x0049F6DC (24B, list-splice, no negative recipe)
STATUS    synth: skeleton written src/work8/synth/func_0049F6DC.c
NEXT      python tools/refine.py 0x0049F6DC --budget 60
```

- pulls from triage list, skips negative-recipe shapes, runs dna → synth,
  hands the agent the next command;
- `queue.py register <addr> <src> <flags>` — re-runs fn.py check, refuses
  unless `RESULT: MATCH`, updates functions.json in canonical format, runs
  the path audit;
- `queue.py report` — near-miss table (addr, best %, diff class, one-line
  hypothesis) for human/large-LLM review;
- state in `logs/autodecomp/state.json`; crash-safe (`--jobs 1`,
  Popen+start_new_session+killpg, per-step timeouts — the OOM rules are
  encoded here, not remembered).

### Phase 6 — AGENTS.md rewrite

Restructure so the expert workflow becomes a reference appendix and the
**default loop is the tool loop**:

- **"Standard loop (use this)":** `queue.py next` → run the suggested
  command → on MATCH: `queue.py register` → `git commit` → repeat; on
  budget-exhaust: `queue.py report` entry, move on. ~15 lines.
- **"When to go manual":** functions the queue marks `defer` (large, weird
  register physics); then the current expert workflow applies, with LESSONS
  as required reading.
- **"Rules that never change" (kept verbatim):** honesty rules, RESULT:
  MATCH as the only truth, hack recording, legal boundaries (no binary,
  no SDK material), never extract code.bin from rom/.
- **Tool quick-reference table:** one line per tool with its exact command
  and what to read from its output.
- Explicit note: AGENTS.md edits require user sign-off (this phase).

## Ordering, effort, risk

| Phase | Effort | Risk |
|---|---|---|
| 1 dna finish | hours | low — pure local analysis |
| 2 recipes | 1 session | low — data entry from LESSONS/matches |
| 3 synth | 1-2 sessions | medium — class coverage grows with use |
| 4 refine | 1-2 sessions | medium — acceptance test gates it |
| 5 queue | 1 session | low — glue over finished pieces |
| 6 AGENTS.md | minutes | sign-off needed |

Phases 1–2 unlock value immediately (dna twins alone close functions);
3–5 are what actually removes the expert from the loop; 6 is cheap but must
come last so the documented loop is the real one.

## Non-goals

- No LLM-in-the-loop automated mutation of source text by tooling — the
  agent (whatever its size) stays the editor; tools propose, agent applies.
- No network/decomp.me dependence; everything is local.
- No batch-compile of many files per wine call beyond what sweep.py does —
  the oracle stays ~5-9 s/function and budgets respect it.
