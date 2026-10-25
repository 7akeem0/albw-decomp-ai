#!/usr/bin/env python
"""Clone a matched source for a shape-twin candidate.

Usage: clone_twin.py <anchor_addr> <cand_addr>

Both functions must have identical instruction words after masking branch
displacements. The clone substitutes the callee externs (call targets move,
constants stay) and renames the function; nothing else changes.
Writes src/work8/twins/func_<CAND>.c and prints the substitutions.
"""

import bisect
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TA = 0x100000

code = open(os.path.join(ROOT, "code.bin"), "rb").read()
starts = json.load(open(os.path.join(ROOT, "funcs.json")))["starts"]


def rng(a):
    i = bisect.bisect_right(starts, a) - 1
    s = starts[i]
    return s, starts[i + 1] if i + 1 < len(starts) else TA + len(code)


def words(a):
    s, e = rng(a)
    return [int.from_bytes(code[s - TA + i * 4: s - TA + i * 4 + 4], "little")
            for i in range((e - s) // 4)], s


def branch_target(w, pc):
    """Target of a b/bl/blx immediate word, or None."""
    if (w & 0x0F000000) in (0x0A000000, 0x0B000000) and (w >> 28) != 0xF:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        return pc + 8 + (imm << 2)
    if (w & 0xFE000000) == 0xFA000000:  # blx imm
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        return pc + 8 + (imm << 2) + 2
    return None


def calls(a):
    """Ordered list of (word_index, target) for branch instructions."""
    ws, s = words(a)
    e = rng(a)[1]
    out = []
    for i, w in enumerate(ws):
        t = branch_target(w, s + 4 * i)
        if t is not None and not (s <= t < e):  # local branches are control flow, not calls
            out.append((i, t))
    return out, len(ws)


def main():
    anchor = int(sys.argv[1], 16)
    cand = int(sys.argv[2], 16)
    ftab = json.load(open(os.path.join(ROOT, "functions.json")))
    src = open(ftab[f"{anchor:08X}"]["path"], encoding="utf-8").read()

    ac, an = calls(anchor)
    cc, cn = calls(cand)
    if an != cn or len(ac) != len(cc):
        sys.exit(f"word count {an} vs {cn} or call count {len(ac)} vs {len(cc)} differ")

    # same word index after masking? every non-branch word must be equal
    wa, sa = words(anchor)
    wc, sc = words(cand)
    for i, (x, y) in enumerate(zip(wa, wc)):
        bx = branch_target(x, sa + 4 * i) is not None
        by = branch_target(y, sc + 4 * i) is not None
        if bx != by or (not bx and x != y):
            sys.exit(f"word {i} differs beyond branch targets: {x:08X} vs {y:08X}")

    subs = {}
    for (i, ta_), (_, tc) in zip(ac, cc):
        name = f"func_{ta_:08X}"
        if name in subs and subs[name] != tc:
            sys.exit(f"call sites to {name} split across targets in candidate")
        subs[name] = tc

    out = src
    for name, t in sorted(subs.items(), key=lambda kv: -len(kv[0])):
        if name not in out:
            sys.exit(f"{name} not found in anchor source")
        out = out.replace(name, f"func_{t:08X}")
    out = out.replace(f"func_{anchor:08X}", f"func_{cand:08X}")
    out = out.replace(f"f_{anchor:08X}", f"f_{cand:08X}")  # short-name convention

    ext = ".cpp" if ftab[f"{anchor:08X}"]["path"].endswith((".cpp", ".cc", ".cxx")) else ".c"
    dest = os.path.join(ROOT, "src", "work8", "twins", f"func_{cand:08X}{ext}")
    os.makedirs(os.path.dirname(dest), exist_ok=True)
    open(dest, "w", encoding="utf-8").write(out)
    print(f"wrote {dest}")
    for name, t in sorted(subs.items()):
        print(f"  {name} -> func_{t:08X}")


if __name__ == "__main__":
    main()
