#!/usr/bin/env python
"""Find twin functions among the unmatched entries.

Two kinds of twins (see docs/LESSONS.md, "Twins"):
- exact:  byte-identical ranges; the matched source can be reused verbatim
          (renamed) and will re-verify.
- shape:  identical instruction words after masking branch targets and
          in-image literal-pool words; the matched source can be reused with
          constants/offsets substituted.

Report: exact groups first, then shape groups, best (largest) first.
"""

import json
import os
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TA, TS = 0x100000, 5841180
TEXT_END = TA + TS

M32 = 0xFFFFFFFF


def load():
    code = open(os.path.join(ROOT, "code.bin"), "rb").read()
    t = json.load(open(os.path.join(ROOT, "funcs.json")))
    f = json.load(open(os.path.join(ROOT, "functions.json")))
    return code, t["starts"], f


def words(code, start, end):
    off = start - TA
    n = (end - start) // 4
    return [int.from_bytes(code[off + i * 4: off + i * 4 + 4], "little") for i in range(n)]


def mask_word(w):
    """Mask branch displacements and in-image data pointers; keep true constants."""
    if (w & 0x0F000000) in (0x0A000000, 0x0B000000) and (w >> 28) != 0xF:
        return w & 0xFF000000  # b/bl/conditional branch: mask imm24
    if (w & 0xFE000000) == 0xFA000000:
        return w & 0xFF000000  # blx imm
    if 0x00100000 <= w < 0x00800000:
        return M32  # literal-pool word pointing into the mapped image
    return w


def main():
    code, starts, ftab = load()
    matched = {}   # addr -> path (honest or hack: has compiled source)
    no_src = set()
    for k, v in ftab.items():
        a = int(k, 16)
        if v.get("status") in ("honest", "hack") and v.get("path"):
            matched[a] = v["path"]
        elif v.get("status") == "no_source":
            no_src.add(a)
    indexed = set(matched) | no_src | {int(k, 16) for k in ftab}
    # candidates: starts with no entry at all (never matched) or no_source
    cand = [a for a in starts if a not in indexed] + sorted(no_src)
    cand_set = set(cand)

    ranges = {}
    for i, a in enumerate(starts):
        e = starts[i + 1] if i + 1 < len(starts) else min(TEXT_END, TA + len(code))
        ranges[a] = (a, e)

    # ---- exact twins ----
    exact = defaultdict(list)
    for a in cand + list(matched):
        s, e = ranges.get(a, (None, None))
        if s is None:
            continue
        exact[bytes(code[s - TA: e - TA])].append(a)
    exact_hits = []
    for key, addrs in exact.items():
        m = [a for a in addrs if a in matched]
        c = [a for a in addrs if a in cand_set]
        if m and c and len(key) >= 16:
            exact_hits.append((len(key), m, c))
    exact_hits.sort(reverse=True)

    # ---- shape twins ----
    shape = defaultdict(list)
    for a in cand + list(matched):
        s, e = ranges.get(a, (None, None))
        if s is None:
            continue
        ws = words(code, s, e)
        if not (8 <= len(ws) <= 512):
            continue
        shape[tuple(mask_word(w) for w in ws)].append(a)
    shape_hits = []
    seen_exact = {frozenset(g[1] + g[2]) for g in exact_hits}
    for key, addrs in shape.items():
        m = [a for a in addrs if a in matched]
        c = [a for a in addrs if a in cand_set]
        if m and c and frozenset(addrs) not in seen_exact:
            shape_hits.append((len(key), m, c))
    shape_hits.sort(reverse=True)

    def fmt(addrs):
        return " ".join(f"{a:08X}" for a in addrs)

    print(f"unmatched candidates: {len(cand)}   matched sources: {len(matched)}")
    print(f"\n=== EXACT twins: {len(exact_hits)} groups ===")
    for size, m, c in exact_hits:
        print(f"{size:4d}B  matched {fmt(m)}  <-  {fmt(c)}")
    print(f"\n=== SHAPE twins (constants differ): {len(shape_hits)} groups ===")
    for size, m, c in shape_hits[:60]:
        print(f"{size * 4:4d}B  matched {fmt(m)}  <-  {fmt(c)}")

    json.dump({
        "exact": [{"size": s, "matched": m, "cands": c} for s, m, c in exact_hits],
        "shape": [{"size": s, "matched": m, "cands": c} for s, m, c in shape_hits],
    }, open(os.path.join(ROOT, "logs", "twins.json"), "w"), indent=1)


if __name__ == "__main__":
    main()
