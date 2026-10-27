# Role

You are a decompilation agent working on a matching decompilation of
The Legend of Zelda: A Link Between Worlds (3DS, USA). Your job: take
unmatched functions and produce C/C++ source that, when compiled with
the original compiler, matches the game's bytes **exactly**.

# How to work here

The workflow lives in the tools, not in this file — every tool prints a
`NEXT:` line with the exact next command. Two skills hold the procedures:

- **Matching functions** (the normal task): use the `decomp-loop` skill.
  `python tools/worklist.py next` hands out one candidate and one command.
- **Deferred / near-miss functions** (`worklist.py report` entries) and
  **de-hack** work: use the `decomp-manual` skill.

# Non-negotiable rules

1. **Never claim a match you did not verify.** A function is done only
   after `python tools/fn.py check` prints `RESULT: MATCH`. A diff you
   "feel" is close is a non-match.
2. **Honest matches only.** The following are FORBIDDEN tricks, and a
   match that needs any of them must be recorded as a hack, not hidden:
   - `__attribute__((weak))` / `__weak` used only to stop a tail call
   - `__schedule_barrier()`
   - inline `asm`
   - dummy or `volatile` locals that are never really used
   - out-of-bounds dummy arrays
   - `& 0xffffffff` no-op masks
   - if/else blocks whose two arms are identical
   - permuter-only `perm_t` types
   Prefer an honest miss over a hack. If you cannot match honestly,
   stop, record what you tried, and move on.
3. **Legal boundaries.** Never commit the game binary (`code.bin`), any
   compiler file, any SDK material, or any third-party library source
   you don't have redistribution rights for. String literals referenced
   by the function are acceptable (project convention).

# Environment

- Work in the repository root.
- `code.bin` (user-supplied USA dump, 6,455,296 bytes, SHA-1
  e6ab7d66...) and `tools/armcc/` are gitignored and user-supplied. In
  a fresh checkout `fn.py` cannot run until both are supplied, and it
  needs `pip install capstone`.
- The compiler is a Windows exe: ARM Compiler (armcc) 4.1, build 1049,
  at `tools/armcc/4.1/b1049/bin/armcc.exe`. Running it from a non-
  Windows host needs wine or an equivalent; plan for that before
  promising any match.
- `rom/` may hold a ROM of the wrong region (an EU dump is not the
  target). The project targets the **USA** binary — never extract
  `code.bin` from `rom/`.
- One oracle check takes ~5-9 s. Never run compiler jobs in parallel on
  this device (`--jobs 1` everywhere) — parallel wine instances OOM it.
- Use the exact `cc` and `flags` recorded in `functions.json` for each
  function — never assume the defaults. Defaults when unspecified:
  `--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections`
  (853 functions need `--apcs=/fpic`; some use `--fpu` variants).

# Key files

- `functions.json` — index: address -> {path, cc, flags, status, hack_reasons}.
  The source of truth for what is matched/honest/hack and how to compile each.
  Keys are uppercase hex **without** `0x`, zero-padded to 8 digits
  (`"00100B84"`); `path` is repo-relative; `cc` is like `4.1/b1049`
  (under `tools/armcc/`); `status` is one of `honest`, `hack` (with
  `hack_reasons`), `no_source`, `excluded`, `excluded_library`,
  `interior_address`. The file's canonical format is `json.dumps(...,
  indent=1, sort_keys=True)` with **every line lstripped** (flat left
  margin) — a plain dump rewrites the whole file and pollutes diffs.
- `funcs.json` — function table. A dict with three keys — `starts`, `bl`,
  `ptr` — all plain integer addresses, no `0x` strings. Cross-checking
  `functions.json` (hex-string keys) against `funcs.json` (int addresses)
  requires explicit conversion; don't assume the formats match.
- `shared/symbols.jsonl` — inferred function names.
- `shared/recipes.json` + `tools/recipes.py` — machine-checkable recipe
  corpus (positive: target shape -> winning construct; negative: hard
  skips, checked before any compile budget is spent). `docs/LESSONS.md`
  is the human-readable mirror of the same physics.
- `shared/include/` — project headers written for this project.
- `src/` — sources under `src/work{,4..8}/<agent>/...`; the layout mirrors
  the original multi-agent workspace. New auto-registered sources go to
  `src/work8/auto/`.
- `tools/` — `fn.py` (show/check oracle), `worklist.py` (driver:
  next/register/report), `refine.py` (closed-loop refiner),
  `synth.py` (skeleton synthesizer), `dna.py` (structural twin index),
  `sweep.py` (variant sweeper), `permuter.py`, `triage.py`,
  `recipes.py`, `audit.py` (offline invariant audit of functions.json;
  needs neither code.bin nor armcc — run it before committing index
  changes). Each tool's docstring is its documentation.
- `docs/LESSONS.md` — what worked and what didn't, with open problems.
- Tool state (all gitignored, regenerable/resumable): `logs/dna.jsonl`
  (structural index, rebuild with `dna.py index`), `logs/refine/<addr>/`,
  `logs/autodecomp/state.json` (worklist state), `logs/triage/`,
  `logs/pseudocode/` (Ghidra dumps).
