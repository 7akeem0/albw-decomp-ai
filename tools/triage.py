"""Triage unindexed functions: classify asm/CRT/linker artifacts vs armcc-producible candidates.

  python tools/triage.py [--region 0x100000-0x200000] [--out logs/triage]

Classification signatures come from docs/LESSONS.md open-problem work:
  svc      - kernel SVC wrappers (armcc's __svc is call-shaped, never frameless)
  mrc_mcr  - p15 coprocessor ops (TLS asm; armcc 4.1 has no __mrc intrinsic)
  veneer   - "ldr pc,[pc,#imm]" linker veneers (not source functions)
  atomic   - ldrex/strex (some are honest matches, some are asm: needs manual look)
  pad_tail - ends in alignment padding with no terminator (cross-function fall-through)
  candidate- everything else: worth a source attempt, sorted smallest-first
"""
import bisect, json, os, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CODE = open(os.path.join(ROOT, "code.bin"), "rb").read()
TA, TS = 0x100000, 5841180


def classify(words):
    has_term = False
    for w in words:
        if (w >> 24) == 0xEF:
            return "svc"
        if (w & 0x0F000000) == 0x0E000000 and ((w >> 8) & 0xF) == 0xF:
            return "mrc_mcr"
        if (w & 0xFFFFF000) == 0xE51FF000:
            return "veneer"
        if (w & 0x0FF00FF0) in (0x01900F90, 0x01800F90):
            return "atomic"
        # terminators: bx lr (E12FFF1E), pop {...,pc}, unconditional b, ldmia pc
        if w == 0xE12FFF1E or (w & 0x0FFF8000) == 0x08BD8000 \
           or (w & 0x0F000000) == 0x0A000000 or (w & 0x0FFF0000) == 0x089D0000:
            has_term = True
    if not has_term and len(words) >= 2 and words[-1] == 0xE1A00000:
        return "pad_tail"
    return "candidate"


def main():
    lo = hi = None
    if "--region" in sys.argv:
        a, b = sys.argv[sys.argv.index("--region") + 1].split("-")
        lo, hi = int(a, 16), int(b, 16)
    outdir = sys.argv[sys.argv.index("--out") + 1] if "--out" in sys.argv else os.path.join(ROOT, "logs", "triage")

    starts = json.load(open(os.path.join(ROOT, "funcs.json")))["starts"]
    indexed = set(json.load(open(os.path.join(ROOT, "functions.json"))))
    os.makedirs(outdir, exist_ok=True)

    buckets = {}
    for i, s in enumerate(starts):
        e = starts[i + 1] if i + 1 < len(starts) else TA + TS
        if s in (0x10BFFC,):  # 0x10BFFC exists only as 0x10BFD4's fall-through pad
            continue
        if lo is not None and not (lo <= s < hi):
            continue
        if f"{s:08X}" in indexed:
            continue
        n = (e - s) // 4
        words = struct.unpack_from("<%dI" % n, CODE, s - TA)
        buckets.setdefault(classify(list(words)), []).append((s, e - s))

    for cls, lst in sorted(buckets.items()):
        path = os.path.join(outdir, "unindexed_%s.txt" % cls)
        with open(path, "w") as fh:
            for s, sz in sorted(lst, key=lambda x: x[1]):
                fh.write("%08X %d\n" % (s, sz))
        print("%-9s %5d  (smallest %d B)  -> %s" % (cls, len(lst), lst and min(x[1] for x in lst), path))
    total = sum(len(v) for v in buckets.values())
    print("%-9s %5d" % ("TOTAL", total))


if __name__ == "__main__":
    main()
