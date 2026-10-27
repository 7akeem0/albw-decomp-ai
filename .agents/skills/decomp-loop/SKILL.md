---
name: decomp-loop
description: "Use this skill for the standard ALBW decomp matching loop: continuing function matching via the worklist — run worklist.py next, execute the suggested refine command, register verified matches, commit, repeat. This is the default way to 'match functions' or 'continue the decomp'."
---

# Standard loop (one function at a time)

1. `python tools/worklist.py next --budget 60`
   → prints one CANDIDATE and the ONE command to run.
2. Run the printed command (normally
   `python tools/refine.py 0xADDR --budget 60`; one check ≈ 5-9 s, so a
   full budget is ~7-9 min).
3. Read refine's STATUS line:
   - **MATCH** → `python tools/worklist.py register 0xADDR`
     (re-verifies the source at its final registered path; refuses
     unless fn.py check prints `RESULT: MATCH`)
     → then commit exactly what register prints (source +
     functions.json), e.g. `git add src/work8/auto/func_<addr>.c
     functions.json && git commit -m "Match <addr> (honest, N/N): ..."`.
   - **DEFER / BUDGET** → the function is already recorded in
     `worklist.py report`; do not thrash it. Go back to step 1.
4. Repeat. Register is the *only* path into functions.json for loop
   work — never hand-edit it for a new match.

# Discipline

- The budget counts fn.py checks. Don't raise it reflexively; one retry
  with a higher budget is reasonable only when the report row shows the
  diff class actually improved.
- A defer is an honest result, not a failure. Two consecutive defers →
  switch to the `decomp-manual` skill (or stop and summarize for the
  user what deferred and why).
- Commit after every register; one function per commit.
- Everything is crash-resumable (`logs/refine/<addr>/`,
  `logs/autodecomp/state.json`). After an OOM/crash, just re-run the
  same command — never clean state by hand.
- The honesty rules in AGENTS.md apply unchanged: if a match would need
  a forbidden trick, it's a hack or a defer — never a hidden trick.

# Tool quick reference

| command | what it does | what to read |
|---|---|---|
| `python tools/worklist.py next` | fresh candidate + next command | `CANDIDATE`, `NEXT` |
| `python tools/refine.py 0xADDR --budget 60` | closed-loop refine (twin or synth skeleton, values/flags/order waves) | `STATUS` line |
| `python tools/worklist.py register 0xADDR` | verify at final path + update functions.json | `REFUSED` vs `functions.json:` line |
| `python tools/worklist.py report` | near-miss backlog, closest first | `hypothesis` column |
| `python tools/worklist.py status` | worklist counts | — |

All commands take `--json`. Machine-readable, one decision per command.
