"""Closed-loop refiner (automation phase 4).

  python tools/refine.py 0xADDR [--budget 60]
                            [--start auto|synth|twin] [--src PATH] [--fresh] [--json]
  python tools/refine.py acceptance [N] [--budget 40]   phase-4 gate

Wraps the fn.py oracle with diff-class-driven mutation (no hand-written
specs). Start source: resumed state > --src > dna twin > synth skeleton.
Loop until MATCH or budget (fn.py checks, ~5-9 s each) exhausted:

  OP-class best    -> VALUES wave (store RHS candidates from the store-map
                      kinds: c0->0, c->immediate, aN->&self+off, l/x->params)
                      then FLAGS grid (-O3/-Otime variants)
  REG/PERM best    -> ORDER wave (statement permutations, sweep's lazy sampler)
  wave set exhausted without improvement -> DEFER

State (resumable): logs/refine/<addr8>/{start.*, best.c, state.json,
history.jsonl, waves/}. Every checked variant is appended to history;
the best source is kept in best.c. Checks are sequential (OOM rule here).
"""
import argparse
import itertools
import json
import os
import re
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import fn
from permuter import check_one
from sweep import body_permutations, classify

ROOT = fn.ROOT
DEFAULT_FLAGS = "--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections"
PREAMBLE = "typedef unsigned int u32;\ntypedef unsigned char u8;\ntypedef unsigned short u16;\n"
# skeleton store line: *(u32*)((char*)self + 0xOFF) = RHS;
STORE_LINE = re.compile(r"^(\s*\*\((?:u8|u16|u32)\*\)\(\(char\*\)self \+ (0x[0-9a-f]+)\) = )([^;]+);$")
OPT_VARIANTS = ("-O3 -Otime", "-O3", "-O2 -Otime", "-O2")


def flag_variants(base):
    """Optimization-level variants of a flag string, deduped, base first."""
    toks = base.split()
    idx = [i for i, t in enumerate(toks) if t.startswith("-O")]
    if not idx:
        return [base]
    head, tail = toks[:idx[0]], toks[idx[-1] + 1:]
    out = []
    for opt in OPT_VARIANTS:
        f = " ".join(head + opt.split() + tail)
        if f not in out:
            out.append(f)
    return out


def state_dir(addr):
    return os.path.join(ROOT, "logs", "refine", "%08X" % addr)


# --------------------------------------------------------------- start sources

def fix_includes(text, path):
    """Twin sources use relative #includes; the state copy needs absolute ones."""
    d = os.path.dirname(os.path.abspath(path))
    out = []
    for line in text.splitlines():
        m = re.match(r'(\s*#include\s+")([^"]+)(")', line)
        if m and not m.group(2).startswith("/"):
            line = m.group(1) + os.path.join(d, m.group(2)) + m.group(3)
        out.append(line)
    return "\n".join(out) + "\n"


def synth_start(addr):
    """Skeleton from synth.py, or (None, reason) to defer."""
    import synth
    s, e, ins = synth.view(addr)
    neg = synth.check_negative(ins)
    if neg:
        return None, "negative recipe %s" % neg
    cls = synth.classify(ins)
    if not cls:
        return None, "no synth class"
    text = synth.skeleton(addr, cls, ins)
    if not text:
        return None, "no skeleton for class %s" % cls
    if re.search(r"\bu(8|16|32)\b", text) and "typedef" not in text:
        text = PREAMBLE + text
    return text, "synth/%s" % cls


def twin_start(addr):
    """Best registered structural twin (dna), with its recorded flags.

    Returns dict(text, flags, name, origin) or None when there is no twin.
    """
    import dna
    if not os.path.exists(dna.DNA_FILE):
        print("building dna index first (~10 min)...")
        dna.build_index()
    idx = dna.load_index()
    status = dna.load_status()
    mine = next((r for r in idx if int(r["addr"], 16) == addr), None)
    if mine is None:
        return None  # index missing/partial: no twin evidence
    own_path = status.get("%08X" % addr, {}).get("path")
    for sim, r in dna.rank_twins(mine, idx):
        entry = status.get(r["addr"], {})
        path = entry.get("path")
        if not path or entry.get("status") not in ("honest", "hack"):
            continue
        if path == own_path:
            continue  # the target's own source: not a twin
        full = os.path.join(ROOT, path)
        if not os.path.exists(full):
            continue
        text = open(full, errors="replace").read()
        return dict(text=fix_includes(text, full),
                    flags=entry.get("flags") or DEFAULT_FLAGS,
                    name="func_%s" % r["addr"], origin="twin:%s" % path)
    return None


# ------------------------------------------------------------ body manipulation

def body_span(text, name=None):
    """Index range (braces inclusive) of the named function's body, or the
    first function body. None if not found."""
    m = re.search(r"\b%s\s*\([^)]*\)\s*\{" % re.escape(name), text) if name else None
    if not m:
        m = re.search(r"\)\s*\{", text)
    if not m:
        return None
    i = text.index("{", m.start())
    depth = 0
    for j in range(i, len(text)):
        if text[j] == "{":
            depth += 1
        elif text[j] == "}":
            depth -= 1
            if depth == 0:
                return (i, j)
    return None


def body_statements(text, name=None):
    """Reorderable top-level statement lines of the function body, or None.

    Conservative: blocks, preprocessor lines, comments and returns make the
    body non-reorderable in v1.
    """
    span = body_span(text, name)
    if span is None:
        return None
    stmts = []
    for line in text[span[0] + 1:span[1]].splitlines():
        s = line.strip()
        if not s:
            continue
        if (not s.endswith(";") or "{" in s or "}" in s or s.startswith("#")
                or s.startswith("return") or "//" in s):
            return None
        stmts.append(line)
    return stmts


def rebuild_body(text, stmts, name=None):
    span = body_span(text, name)
    if span is None:
        return None
    return text[:span[0] + 1] + "\n" + "\n".join(stmts) + "\n" + text[span[1]:]


def store_slots(text):
    """Skeleton store lines: list of (lineno, prefix, offset, current_rhs)."""
    slots = []
    for i, line in enumerate(text.splitlines()):
        m = STORE_LINE.match(line)
        if m:
            slots.append((i, m.group(1), int(m.group(2), 0), m.group(3)))
    return slots


def rhs_candidates(kind, imms):
    """Candidate RHS texts for one store, best guess first (store-map kind)."""
    if kind == "c0":
        return ["0"]
    if kind == "c":
        return ["0x%x" % v for v in imms[:4]] or ["0"]
    if kind.startswith("a"):
        return ["(u32)((char*)self + 0x%x)" % int(kind[1:], 0)]
    if kind in ("l", "x"):
        return ["p1", "p2", "p3", "0"]
    return ["0"] + ["0x%x" % v for v in imms[:3]] + ["p1", "p2", "p3", "self"]


def immediates(start, end):
    """Distinct mov/mvn immediates of the target (constant-store candidates)."""
    vals, seen = [], set()
    for a in range(start, end, 4):
        ins = fn.dis1(a)
        if not ins:
            continue
        m = re.fullmatch(r"(r\d+), #?(0x[0-9a-f]+|-?\d+)", ins.op_str)
        if m and ins.mnemonic.split(".")[0] in ("mov", "mvn"):
            v = int(m.group(2), 0)
            if ins.mnemonic.split(".")[0] == "mvn":
                v = ~v
            if v not in seen and -0x10000 <= v <= 0x10000:
                seen.add(v)
                vals.append(v)
    return vals


# --------------------------------------------------------------------- waves

def gen_values(text, addr, budget):
    """VALUES wave variants: store RHS candidates from the store-map kind.

    All-primary first, then single-slot alternates, then two-slot combos.
    Deduped against the input text.
    """
    import dna
    s, e = fn.func_range(addr)
    stores = dna.store_map(s, e)
    imms = immediates(s, e)
    lines = text.splitlines()
    slots = store_slots(text)
    if not slots:
        return []
    cands = []
    for lineno, prefix, off, cur in slots:
        kind = next((k for o, _sz, k in stores if o == off), "?")
        cs = rhs_candidates(kind, imms)
        if cur in cs:  # current guess first: single-slot waves diverge from it
            cs.remove(cur)
            cs.insert(0, cur)
        cands.append(cs)

    def build(pick):
        new = lines[:]
        for i, val in pick.items():
            new[slots[i][0]] = slots[i][1] + val + ";"
        return "\n".join(new) + "\n"

    variants, seen = [], {text}
    def add(pick):
        t = build(pick)
        if t not in seen:
            seen.add(t)
            variants.append(t)
    add({i: cands[i][0] for i in range(len(slots))})  # all kind-primaries
    # single/double-slot alternates only where a real choice exists: a slot
    # whose kind pins one candidate is already covered by the primary variant
    multi = [i for i in range(len(slots)) if len(cands[i]) > 1]
    for i in multi:
        for v in cands[i]:
            add({i: v})
    for i, j in itertools.combinations(multi, 2):
        for vi in cands[i][:3]:
            for vj in cands[j][:3]:
                add({i: vi, j: vj})
    return variants[:budget]


def gen_order(text, budget, name=None):
    """ORDER wave variants: statement permutations of the function body."""
    stmts = body_statements(text, name)
    if not stmts or len(stmts) < 2:
        return []
    out, seen = [], {text}
    for p in body_permutations(stmts, min(budget, 240)):
        t = rebuild_body(text, list(p), name)
        if t and t not in seen:
            seen.add(t)
            out.append(t)
    return out[:budget]


# -------------------------------------------------------------------- engine

def better(a, b):
    """Is candidate a strictly closer to the target than current best b?"""
    if b is None:
        return True
    ka = (not a["match"], a["n_op"], a["n_reg"], -a["words"], -a["sim"])
    kb = (not b["match"], b["n_op"], b["n_reg"], -b["words"], -b["sim"])
    return ka < kb


def run(addr, budget=60, start="auto", src=None, fresh=False,
        as_json=False, quiet=False):
    sd = state_dir(addr)
    os.makedirs(os.path.join(sd, "waves"), exist_ok=True)
    hist_path = os.path.join(sd, "history.jsonl")
    state_path = os.path.join(sd, "state.json")

    # ---- resume or resolve a fresh start
    state = None
    if not fresh and os.path.exists(state_path):
        state = json.load(open(state_path))
        if not os.path.exists(os.path.join(sd, "best.c")):  # crash between writes
            open(os.path.join(sd, "best.c"), "w").write(open(state["best"]["path"]).read())
        if not quiet:
            b = state["best"]
            print("resumed: %d checks used, best OP=%d REG=%d %s" % (
                state["used"], b["n_op"], b["n_reg"], "PERM" if b["perm"] else ""))
    if state is None:
        origin = ext = flags = name = text = None
        if src:
            text = open(src, errors="replace").read()
            origin, ext, flags, name = "src:%s" % src, os.path.splitext(src)[1] or ".cpp", \
                DEFAULT_FLAGS, None
        else:
            t = twin_start(addr) if start in ("auto", "twin") else None
            if t:
                text, flags, name, origin = t["text"], t["flags"], t["name"], t["origin"]
                ext = os.path.splitext(origin.split(":")[-1])[1] or ".cpp"
            elif start == "twin":
                sys.exit("no usable registered twin for 0x%08X" % addr)
        if origin is None:
            text, otag = synth_start(addr)
            if text is None:
                _report(addr, "DEFER", otag, as_json)
                return {"addr": addr, "status": "DEFER", "reason": otag}
            origin, ext, flags, name = otag, ".c", DEFAULT_FLAGS, "func_%08X" % addr
        open(os.path.join(sd, "start" + ext), "w").write(text)
        state = {"addr": "%08X" % addr, "used": 0, "iter": 0, "tried": [],
                 "origin": origin, "ext": ext, "name": name,
                 "flags_base": flags, "best": None}

    def check(text, flags, wave):
        state["used"] += 1
        path = os.path.join(sd, "waves", "v%04d%s" % (state["used"], state["ext"]))
        open(path, "w").write(text)
        r = check_one(sd, path, addr, flags, None)
        if r["err"] in ("TIMEOUT", "NO OUTPUT"):
            r = check_one(sd, path, addr, flags, None)  # wine warm-up flake; retry once
        if r["err"]:
            rec = dict(match=False, n_op=999, n_reg=0, perm=False, words=0,
                       total=0, sim=0.0, err=r["err"][:80])
        else:
            rec = dict(classify(r["out"], r["words"], r["total"]))
            rec.update(match=r["match"], words=r["words"], total=r["total"],
                       sim=r["sim"], err="")
        rec.update(iter=state["iter"], wave=wave, flags=flags, path=path)
        with open(hist_path, "a") as fh:
            fh.write(json.dumps({k: rec.get(k) for k in
                                 ("iter", "wave", "flags", "match", "n_op", "n_reg",
                                  "perm", "words", "total", "sim", "err")}) + "\n")
        return rec

    def keep_best(rec, text):
        state["best"] = rec
        open(os.path.join(sd, "best.c"), "w").write(text)
        _save(state_path, state)

    # ---- baseline
    if state["best"] is None:
        start_text = open(os.path.join(sd, "start" + state["ext"])).read()
        rec = check(start_text, state["flags_base"], "baseline")
        keep_best(rec, start_text)
        if not quiet:
            _print_rec("baseline", rec)
        # twin picked as start but clearly the wrong construct: the synth
        # skeleton (store-map driven) is the fallback; keep the twin's flags
        if (rec["n_op"] > 2 and not rec["match"] and state["origin"].startswith("twin")
                and not rec["err"]):
            text, otag = synth_start(addr)
            if text:
                state["origin"], state["name"] = otag, "func_%08X" % addr
                if re.search(r"\bu(8|16|32)\b", text) and "typedef" not in text:
                    text = PREAMBLE + text
                state["ext"] = ".c"
                open(os.path.join(sd, "start.c"), "w").write(text)
                rec = check(text, state["flags_base"], "baseline-synth")
                keep_best(rec, text)
                if not quiet:
                    _print_rec("baseline-synth", rec)
    if state["best"]["match"]:
        state["status"] = "MATCH"
        _save(state_path, state)
        return _finish(addr, state, "MATCH", as_json, quiet)

    tried = set(state["tried"])

    # ---- waves until MATCH / budget / exhaustion
    while state["used"] < budget and not state["best"]["match"]:
        best = state["best"]
        left = budget - state["used"]
        text = open(os.path.join(sd, "best.c")).read()
        wave, checks = None, []
        if best["n_op"] > 0:
            if "values" not in tried and state["origin"].startswith("synth"):
                wave = "values"
                checks = [(v, best["flags"]) for v in gen_values(text, addr, left)]
            elif "flags" not in tried:
                wave = "flags"
                checks = [(text, f) for f in flag_variants(state["flags_base"])
                          if f != best["flags"]]
            elif "order" not in tried and best["n_op"] <= 2:
                # reordering cannot fix missing-instruction constructs
                wave = "order"
                checks = [(v, best["flags"]) for v in gen_order(text, left, state["name"])]
        else:
            if "order" not in tried:
                wave = "order"
                checks = [(v, best["flags"]) for v in gen_order(text, left, state["name"])]
            elif "flags" not in tried:
                wave = "flags"
                checks = [(text, f) for f in flag_variants(state["flags_base"])
                          if f != best["flags"]]
        if wave is None:
            break
        tried.add(wave)
        checks = checks[:left]
        if not checks:
            continue  # this wave had nothing to try; fall through to the next
        if not quiet:
            print("[%d] wave %s: %d variants  (from OP=%d REG=%d %s)" % (
                state["iter"] + 1, wave, len(checks), best["n_op"], best["n_reg"],
                "PERM" if best["perm"] else ""))
        for k, (text_v, fl) in enumerate(checks):
            rec = check(text_v, fl, wave)
            if not quiet:
                _print_rec("  %2d/%d" % (k + 1, len(checks)), rec)
            if better(rec, state["best"]):
                keep_best(rec, text_v)
                tried.discard("order")  # new best body may reorder differently
                if rec["match"]:
                    break
        state["iter"] += 1
        state["tried"] = sorted(tried)
        _save(state_path, state)

    state["tried"] = sorted(tried)
    status = "MATCH" if state["best"]["match"] else \
        ("BUDGET" if state["used"] >= budget else "DEFER")
    state["status"] = status
    _save(state_path, state)
    return _finish(addr, state, status, as_json, quiet)


def _print_rec(tag, rec):
    print("  %-10s OP=%-3d REG=%-3d %s %d/%d sim=%.1f%s%s" % (
        tag, rec["n_op"], rec["n_reg"], "PERM " if rec["perm"] else "",
        rec["words"], rec["total"], rec["sim"],
        " MATCH" if rec["match"] else "", " " + rec["err"][:40] if rec["err"] else ""))


def _save(state_path, state):
    json.dump(state, open(state_path, "w"), indent=1)


def _finish(addr, state, status, as_json, quiet):
    b = state["best"]
    if as_json:
        print(json.dumps({"addr": "%08X" % addr, "status": status,
                          "used": state["used"], "origin": state["origin"],
                          "best": {k: b.get(k) for k in
                                   ("n_op", "n_reg", "perm", "words", "total",
                                    "sim", "match", "flags", "err")}}))
        return {"addr": addr, "status": status, "used": state["used"], "best": b}
    if not quiet:
        print("STATUS %s  %d checks used, best OP=%d REG=%d %s %d/%d sim=%.1f" % (
            status, state["used"], b["n_op"], b["n_reg"], "PERM " if b["perm"] else "",
            b["words"], b["total"], b["sim"]))
    if not quiet:
        if status == "MATCH":
            print("NEXT  python tools/fn.py check logs/refine/%08X/best.c 0x%08X "
                  "--cc 4.1/b1049 --flags \"%s\"  # verify, then register" % (
                      addr, addr, b["flags"]))
        else:
            print("NEXT  manual review (near-miss in logs/refine/%08X/history.jsonl)" % addr)
    return {"addr": addr, "status": status, "used": state["used"], "best": b,
            "origin": state["origin"]}


# ----------------------------------------------------------------- acceptance

def acceptance(n=10, budget=40):
    """Phase-4 gate: skeleton-only restart on known honest matches.

    Picks honest-matched store-class functions, drops their source, regenerates
    the synth skeleton and refines to MATCH. Needs n reproduced.
    """
    import synth
    status = json.load(open(os.path.join(ROOT, "functions.json")))
    cands = []
    for key, entry in status.items():
        if entry["status"] != "honest" or not entry.get("path"):
            continue
        if not os.path.exists(os.path.join(ROOT, entry["path"])):
            continue
        addr = int(key, 16)
        try:
            s, e, ins = synth.view(addr)
        except Exception:
            continue
        if any(m in ("svc", "mrc", "mcr") for m, _ in ins):
            continue
        if synth.classify(ins) != "stores":
            continue
        if not set(m for m, _ in ins) <= {"mov", "add", "str", "strb", "strh",
                                          "strd", "stm", "ldr", "ldm", "bx"}:
            continue
        import dna
        if not dna.store_map(s, e):  # skip trivial bx-lr empties: the gate must
            continue                  # exercise the values/order wave machinery
        cands.append((e - s, addr, key))
    cands.sort()
    print("%d store-class honest candidates; refining up to %d of the "
          "smallest with budget %d" % (len(cands), n, budget))
    matched = []
    for size, addr, key in cands[: n * 2]:
        if len(matched) >= n:
            break
        t0 = time.time()
        r = run(addr, budget=budget, start="synth", fresh=True, quiet=True)
        print("%s  %3dB  %-7s %3d checks %.0fs" % (
            key, size, r["status"], r.get("used", 0), time.time() - t0))
        if r["status"] == "MATCH":
            matched.append(key)
    print("acceptance: %d/%d reproduced from skeleton-only restart" % (len(matched), n))
    return matched


# ---------------------------------------------------------------------- main

def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("addr", nargs="?")
    ap.add_argument("--budget", type=int, default=60)
    ap.add_argument("--start", choices=["auto", "synth", "twin"], default="auto")
    ap.add_argument("--src")
    ap.add_argument("--fresh", action="store_true")
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    if not a.addr:
        print(__doc__)
        return
    run(int(a.addr, 16), budget=a.budget, start=a.start, src=a.src,
        fresh=a.fresh, as_json=a.json)


if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "acceptance":
        n = int(sys.argv[2]) if len(sys.argv) > 2 else 10
        b = int(sys.argv[sys.argv.index("--budget") + 1]) if "--budget" in sys.argv else 40
        acceptance(n, budget=b)
    else:
        main()
