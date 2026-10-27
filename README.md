# The Legend of Zelda: A Link Between Worlds (3DS, USA): matching decompilation (work in progress)

This repository holds C/C++ source for individual functions of *A Link Between Worlds*. Each source compiles with
the original compiler to **exactly the same bytes** as the function in the game. It is an unfinished project, shared
so that anyone who wants to can continue it.

**No game binary, data files or assets are included.** You need your own copy of the game's code binary. The compiler is
not included either.

## Status

| | Functions | Share of 25,986 |
|---|---:|---:|
| Matched, source included | 16,581 | 63.8% |
| of which honest (no hack, see below) | 15,703 | 60.4% |
| of which matched only with a hack | 878 | 3.4% |
| Matched earlier, source not included | 111 | 0.4% |

The 111 functions without source break down as follows:
- **72:** sources lost over time.
- **26:** matched only with third-party library sources that cannot be redistributed.
- **9:** prebuilt middleware/SDK library code, built with other compiler builds. This is not game code and is
  deliberately excluded.
- **4:** interior addresses that duplicate their enclosing function.

(Counts are recomputed from `functions.json` with `python tools/audit.py stats`.)

**What "honest" means here.** The source compiles to the exact bytes **without** any of these tricks:
- `__attribute__((weak))` / `__weak` used only to stop a tail call;
- `__schedule_barrier()`;
- inline `asm`;
- dummy or `volatile` locals that are never really used;
- out-of-bounds dummy arrays;
- `& 0xffffffff` no-op masks;
- if/else blocks whose two arms are identical;
- permuter-only `perm_t` types.

`functions.json` marks every function `honest` or `hack` and lists the hack reasons. Hack counts: weak 528,
`__schedule_barrier` 244, asm 96, identical arms 29, perm_t 24, dummy locals 16, volatile dummies 11, no-op mask 1,
out-of-bounds dummy 1.

## Layout

| Path | Contents |
|---|---|
| `functions.json` | The index: `address -> {path, cc, flags, status, hack_reasons}` |
| `src/` | The sources. Paths keep the layout of the original workspace (many agents and tools wrote to many folders), and local `#include`s are relative to each file |
| `shared/include/` | Project headers (written for this project) |
| `shared/symbols.jsonl` | Names inferred for some functions |
| `shared/extra_starts.txt`, `shared/not_starts.txt` | Corrections to the function table |
| `funcs.json` | The function table: start addresses, call targets, pointers. Addresses only, no code |
| `tools/fn.py` | Disassembly, cross-references, and the byte-exact checker |
| `tools/audit.py` | Offline invariant audit of `functions.json` + status-table stats |

## Requirements

1. **Python 3** with `capstone` (`pip install capstone`).
2. **The game code binary.** Save it as `code.bin` in the repository root. It is the decompressed `.code` section of
   the USA release, dumped from your own copy, 6,455,296 bytes, SHA-1 `e6ab7d66ee62e879248b0660aaf38d22202e604b`.
3. **ARM Compiler (armcc) 4.1, build 1049.** Place it at `tools/armcc/4.1/b1049/bin/armcc.exe`. Every published
   function uses this build. You need your own licensed copy.

Default flags:
```
--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections
```
853 functions also need `--apcs=/fpic`, and a few use `--fpu` variants. `functions.json` has the exact `cc` and `flags`
of each function.

## Usage

```
python tools/fn.py show  0x001747E8                     # annotated disassembly of the original function
python tools/fn.py check <path from functions.json> 0x<ADDR> --cc <cc> --flags "<flags>"
```
`check` compiles the file, finds the function, compares it with the game bytes, and prints `RESULT: MATCH` or an
aligned diff. Some C++ members need `--sym <mangled-name substring>`.

## How it was made

Most of the sources were written by **automated tools**:
- many LLM agents, each working on one function;
- a custom translator that lifts machine code to compiler-shaped C;
- source permuters;
- "twin" harvesting, which reuses a matched source for byte-identical or same-shape functions.

**Every source here was verified byte-exact with `tools/fn.py check`.** Some communities do not accept
machine-written decompilation, so please keep this in mind if you merge anything.

See `docs/LESSONS.md` for what worked, what did not, and the measured numbers.

## Where to go next

The remaining ~9,300 functions are the hard tail. Our tests show the main blocker is **the shape of small inline
helpers and classes from the game's own headers**:
- inlined constructors;
- setters with parameters;
- temporary string objects;
- conversion operators.

The bytes show *that* a helper was inlined at a site, but not its exact source form. A shared, correct header library
of these helpers would unlock many functions at once. This is how other large decompilation projects grew.

## Legal

This project contains no Nintendo binaries, data files or assets, and no compiler files.
- As in other decompilation projects, the sources contain the string literals the functions reference.
- It contains no material from non-public SDKs. It was scanned for official SDK file headers and similar markers, and
  prebuilt middleware/SDK library functions were excluded.

You must supply your own legally obtained game dump and compiler. The repository has no license file yet; the owner
decides.

---

### ملخص بالعربي
- **وش هذا المشروع:** تفكيك مطابق للعبة Zelda: A Link Between Worlds على 3DS. كل ملف هنا لما يترجَم بمترجم armcc 4.1 يعطي نفس بايتات الدالة في اللعبة بالضبط.
- **وين وصلنا:** 63.7% من الدوال مطابقة، و60.3% منها نظيفة بدون حيل.
- **وش ما يشمل:** ما فيه أي ملفات من اللعبة (ملف الكود أو ملفات البيانات) ولا المترجم. كل واحد يجيب نسخته بنفسه.
- **ليش منشور:** الشغل منشور عشان أي أحد يبي يكمّل.
