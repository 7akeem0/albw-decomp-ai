"""Variant sweep with diff-classification feedback (permuter.py + classifier).

  python tools/sweep.py <addr> <spec.py> [--jobs 5] [--top 8]
                        [--stop-on-match] [--sample 240] [--max 2000]

spec.py (all slots use @@NAME@@ — braces clash with C):
  TEMPLATE   source text with @@slot@@ placeholders
  GROUPS     optional list of dicts: coupled substitution sets (e.g. a helper's
             signature + body + call site must change together); enumerated as
             one dimension of the product
  GRID       optional dict slot -> [texts]: independent dimensions
  BODY       optional list of C statements; template must contain @@BODY@@;
             sweeps statement orderings (all perms if <= --sample, else a
             random sample, seed 1)
  FLAGS      optional list of flag strings (default: fn.py defaults only)

Classification (parsed from fn.py check's diff table):
  OP      instruction really differs (mnemonic/immediate/operands)
  REG     same instruction modulo register names — allocation-only delta
  PERM    whole function is one reordering of the same instruction multiset
Variants with 0 OP diffs are allocation-only near-misses: mutate ordering /
locals / flags, keep the construct.
"""
import importlib.util
import itertools
import json
import os
import random
import re
import shutil
import sys
import tempfile
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from permuter import RESULT_RE, check_one  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_FLAGS = "--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections"
REGTOK = re.compile(r"\b(?:r\d+|sp|lr|pc|ip|s\d+|d\d+)\b")


def canon(text):
    """Instruction text with register names canonicalized (allocation-blind)."""
    return REGTOK.sub("R", text.strip())


def regtok(text):
    m = REGTOK.search(text)
    return m.group(0) if m else ""


def parse_rows(out):
    """Extract diff-table rows from fn.py check output.

    Returns a list of (offset, target_text, mine_text). Handles both the
    equal-size table (one offset column) and the grouped-opcodes table (two
    offset columns, either may be empty).
    """
    rows = []
    for line in out.splitlines():
        m = re.match(r"^\s*(!{2}|\s{2})\s*(\S.*)$", line)
        if not m:
            continue
        rest = m.group(2)
        if rest.startswith(("off", "---", "orig")):
            continue
        toks = re.split(r"\s{2,}", rest.strip())
        # instruction columns: first word is a mnemonic (>=2 letters, or "b");
        # bare hex offsets like "c" must not be mistaken for mnemonics
        def is_insn(tok):
            w = tok.split()[0] if tok.split() else ""
            return (len(w) >= 2 and re.fullmatch(r"[a-z.]+", w)) or w == "b"
        cols = [t for t in toks if is_insn(t)]
        if not cols or "err:" in cols[0]:
            continue
        col1 = cols[0]
        col2 = cols[1] if len(cols) > 1 else ""
        offset = toks[0] if re.fullmatch(r"[0-9a-f]+", toks[0]) else "?"
        rows.append((offset, col1, col2))
    return rows


def classify(out, words, total):
    """Classify a NO MATCH result into OP / REG / PERM structure."""
    same = int(RESULT_RE.search(out).group(2))
    rows = parse_rows(out)
    n_op = n_reg = 0
    regmap = []
    for off, t, mine in rows:
        if t == mine:
            continue
        if not t or not mine:
            n_op += 1  # one side missing (sizes differ): a real instruction delta
            continue
        if t.startswith("b") and mine.startswith("b"):
            # branch-pair (target differs only by condition code or in/out-of-
            # function displacement, e.g. bne vs beq): one OP, not fatal
            n_op += 1
            continue
        if off == "?":
            # grouped-opcodes table (sizes differ): missing side = missing
            # instruction; align-by-off recon gives unreliable deltas, so
            # just count the presence gap without reg-level detail
            n_op += 1
            continue
        if canon(t) == canon(mine) or (t.startswith("bl #") and mine.startswith("bl #")):
            # same instruction modulo register names, or cross-TU bl target
            # (fn.py prints those unmarked: unresolved extern names)
            n_reg += 1
            regmap.append("%s->%s(+%s)" % (regtok(t), regtok(mine), off))
        else:
            n_op += 1
    perm = False
    if "sizes differ" not in out and len(rows) == total and len(rows) > 1:
        tgt = sorted(canon(t) for _, t, _ in rows)
        mine = sorted(canon(m) for _, _, m in rows)
        if tgt != mine:
            # same multiset modulo one branch's condition code? then it's a
            # branch-cond-flip permutation, not a real instruction delta
            strip_cc = lambda s: re.sub(r"^b(eq|ne|lt|gt|le|ge|hi|lo)\b", "b", s)
            if [strip_cc(x) for x in tgt] == [strip_cc(x) for x in mine] and n_reg == 0:
                n_op = 0
                perm = True
        else:
            perm = True
    return dict(n_op=n_op, n_reg=n_reg, perm=perm, regmap=regmap, rows=rows, same=same)


def body_permutations(body, sample):
    """Orderings of BODY without ever materializing n! (12! = 479M tuples OOMed
    Termux once). Full enumeration only when n! <= sample; else a seeded
    random sample with dedup."""
    import math
    if math.factorial(len(body)) <= sample:
        return list(itertools.permutations(body))
    seen, out = set(), []
    rng = random.Random(1)
    tries = 0
    while len(out) < sample and tries < sample * 20:
        tries += 1
        p = body[:]
        rng.shuffle(p)
        key = tuple(p)
        if key not in seen:
            seen.add(key)
            out.append(p)
    return out


def load_spec(path):
    spec = importlib.util.spec_from_file_location("sweep_spec", path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    template = mod.TEMPLATE
    groups = list(getattr(mod, "GROUPS", [{}]))
    grid = dict(getattr(mod, "GRID", {}))
    body = getattr(mod, "BODY", None)
    if body:
        grid["BODY"] = ["\n".join(p) for p in body_permutations(body, SAMPLE)]
    flags = getattr(mod, "FLAGS", None) or [DEFAULT_FLAGS]
    return template, groups, grid, flags, getattr(mod, "SYM", None)


def variant_iter(template, groups, grid, flags):
    """Yield (index, src_text, flags, substitutions)."""
    names = sorted(grid)
    idx = 0
    for g, combo in itertools.product(groups, itertools.product(*(grid[k] for k in names)) if names else [()]):
        subs = dict(g)
        subs.update(zip(names, combo))
        text = template
        for k, v in subs.items():
            text = text.replace("@@%s@@" % k, v)
        for fl in flags:
            yield idx, text, fl, subs
            idx += 1


def main():
    global SAMPLE
    addr = int(sys.argv[1], 16)
    spec_path = sys.argv[2]
    jobs = int(sys.argv[sys.argv.index("--jobs") + 1]) if "--jobs" in sys.argv else 5
    top = int(sys.argv[sys.argv.index("--top") + 1]) if "--top" in sys.argv else 8
    SAMPLE = int(sys.argv[sys.argv.index("--sample") + 1]) if "--sample" in sys.argv else 240
    stop = "--stop-on-match" in sys.argv

    maxv = int(sys.argv[sys.argv.index("--max") + 1]) if "--max" in sys.argv else 2000

    template, groups, grid, flags, sym = load_spec(spec_path)
    est = len(groups) * len(flags)
    for k in grid:
        est *= len(grid[k])
    if est > maxv:
        sys.exit("grid would produce %d variants (> --max %d); shrink it or pass --max" % (est, maxv))
    variants = list(variant_iter(template, groups, grid, flags))
    print("%d variants (%d groups x %s x %d flag-sets)" % (
        len(variants), len(groups), "x".join(str(len(grid[k])) for k in sorted(grid)) or "1", len(flags)))

    workdir = os.path.join(tempfile.gettempdir(), "sweep_%08X" % addr)
    shutil.rmtree(workdir, ignore_errors=True)
    os.makedirs(workdir)

    def run(v):
        idx, text, fl, subs = v
        src = os.path.join(workdir, "v%05d.cpp" % idx)
        with open(src, "w") as fh:
            fh.write(text)
        r = check_one(workdir, src, addr, fl, sym)
        r.update(idx=idx, flags=fl, src=src, subs=subs)
        if r["err"]:
            r.update(n_op=999, n_reg=0, perm=False, regmap=[])
        else:
            r.update(classify(r["out"], r["words"], r["total"]))
        return r

    from concurrent.futures import ThreadPoolExecutor, as_completed
    results, t0 = [], time.time()
    with ThreadPoolExecutor(max_workers=jobs) as ex:
        futs = [ex.submit(run, v) for v in variants]
        for i, fut in enumerate(as_completed(futs)):
            r = fut.result()
            results.append(r)
            if r["err"]:
                print("[%d/%d] v%05d ERR: %s" % (i + 1, len(variants), r["idx"], r["err"][:60]))
            else:
                print("[%d/%d] v%05d %s OP=%d REG=%d%s %d/%d sim=%.1f [%s]" % (
                    i + 1, len(variants), r["idx"], "MATCH " if r["match"] else "",
                    r["n_op"], r["n_reg"], " PERM" if r["perm"] else "",
                    r["words"], r["total"], r["sim"], " ".join(r["flags"].split()[-3:-1])))
            if r["match"] and stop:
                for p in futs:
                    p.cancel()
                break

    results.sort(key=lambda r: (r["match"], r["err"] == "", r["n_op"] == 0, -r["n_op"],
                                -r["n_reg"], r["perm"], r["words"], r["sim"]), reverse=True)
    with open(os.path.join(workdir, "results.jsonl"), "w") as fh:
        for r in results:
            fh.write(json.dumps({k: r.get(k) for k in
                                 ("idx", "flags", "subs", "match", "words", "total", "sim",
                                  "n_op", "n_reg", "perm", "regmap", "err")}) + "\n")
    print("\nbest of %d in %.0fs | %s" % (len(results), time.time() - t0, workdir))
    for r in results[:top]:
        if r["err"]:
            print("  v%05d ERR %s" % (r["idx"], r["err"][:60]))
            continue
        print("  v%05d %s OP=%d REG=%d%s %d/%d sim=%.1f [%s] %s" % (
            r["idx"], "MATCH" if r["match"] else "     ", r["n_op"], r["n_reg"],
            " PERM" if r["perm"] else "", r["words"], r["total"], r["sim"],
            " ".join(r["flags"].split()[-3:-1]),
            "; ".join(r["regmap"][:6]) + (" ..." if len(r["regmap"]) > 6 else "")))
        if r["n_op"] and r["n_op"] <= 6 and not r["match"]:
            for off, t, mine in r["rows"]:
                if t and mine and t != mine and canon(t) != canon(mine):
                    print("        +%s  %s   |   %s" % (off, t, mine))
    if results and results[0]["match"]:
        print("\nWINNER: %s" % results[0]["src"])
        print(open(results[0]["src"]).read())


if __name__ == "__main__":
    main()
