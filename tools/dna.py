"""Structural DNA index over all functions (automation step 3).

  python tools/dna.py index                 build logs/dna.jsonl (~1 min, regenerable)
  python tools/dna.py query 0x00106FC4     nearest structural matches for a target
  python tools/dna.py offset 0x74          who writes struct offset +0x74 (pseudocode grep)
  python tools/dna.py show 0x00106FC4      one function's DNA
  python tools/dna.py acceptance [N]       phase-1 gate: rank quality on N known matches

All subcommands take --json. index is incremental and crash-resumable.

DNA per function: mnemonic sequence (conditions stripped), store map to the
`self` chain grown from r0 (offset, size, value kind), call list, pool refs.
Similarity = difflib ratio of mnemonic sequences + store-map shape equality.
Matched functions come with their source path, so a query on an unmatched
target surfaces "twin" skeletons to start from.
"""
import bisect
import difflib
import json
import os
import random
import re
import struct
import sys

import fn  # tools/fn.py: STARTS, func_range, rd32, name_of, listing, in_text

ROOT = fn.ROOT
DNA_FILE = os.path.join(ROOT, "logs", "dna.jsonl")
PSEUDO = os.path.join(ROOT, "logs", "pseudocode")

# --- store-map extraction ---------------------------------------------------


def store_map(start, end):
    """Stores into the self-chain: base register descended from r0.

    Returns list of [offset, size, kind]. Kind: c0 (zero), c (const),
    aN (self+off address), l (loaded), x (call result), ? (unknown).
    """
    bases = {0: 0}  # reg -> offset from self
    vals = {}  # reg -> kind
    stores = []
    pool = fn.code_end(start, end)[1]
    for a in range(start, end, 4):
        ins = fn.dis1(a)
        if ins is None or a in pool:
            continue
        m, o = ins.mnemonic, ins.op_str
        cond = m.split(".")[0]
        # NOTE: patterns match op_str only (no mnemonic); cond does that job.
        # track copies of self / offsets
        mm = re.fullmatch(r"(r\d+), (r\d+)", o)
        if mm and cond == "mov":
            if int(mm.group(2)[1:]) in bases:
                bases[int(mm.group(1)[1:])] = bases[int(mm.group(2)[1:])]
            continue
        mm = re.fullmatch(r"(r\d+), (r\d+), #?(0x[0-9a-f]+|\d+)", o)
        if mm and cond in ("add", "sub"):
            b = bases.get(int(mm.group(2)[1:]))
            if b is not None:
                d = int(mm.group(3), 0)
                new = b + (d if cond == "add" else -d)
                bases[int(mm.group(1)[1:])] = new
                vals[int(mm.group(1)[1:])] = "a%d" % new  # address of self+off
            continue
        # value kinds
        mm = re.fullmatch(r"(r\d+), #?(0x[0-9a-f]+|\d+)", o)
        if mm and cond == "mov":
            v = int(mm.group(2), 0)
            vals[int(mm.group(1)[1:])] = "c0" if v == 0 else "c"
            continue
        mm = re.fullmatch(r"(r\d+), \[.*", o)
        if mm and cond == "ldr":
            vals[int(mm.group(1)[1:])] = "l"
            continue
        if cond in ("bl", "blx"):
            vals[0] = "x"
            continue
        # stores: str/strb/strh/strd rA, [rB, #imm]  |  stm rB, {..}
        mm = re.fullmatch(r"(r\d+|ip), (r\d+|ip), \[(r\d+|sp|ip)(?:, #?(-?(?:0x[0-9a-f]+|\d+)))?\](!?)", o)
        if mm and cond == "strd":
            b = bases.get(int(mm.group(3)[1:])) if mm.group(3) not in ("sp", "ip") else None
            if b is not None:
                off = b + (int(mm.group(4), 0) if mm.group(4) else 0)
                for k in (0, 1):
                    kind = "?" if mm.group(1 + k) == "ip" else vals.get(int(mm.group(1 + k)[1:]), "?")
                    stores.append([off + 4 * k, 4, kind])
            continue
        mm = re.fullmatch(r"(r\d+|ip), \[(r\d+|sp|ip)(?:, #?(-?(?:0x[0-9a-f]+|\d+)))?\](!?)", o)
        if mm and cond.startswith("str"):  # str/strb/strh (strd handled above)
            b = bases.get(int(mm.group(2)[1:])) if mm.group(2) not in ("sp", "ip") else None
            if b is not None:
                off = b + (int(mm.group(3), 0) if mm.group(3) else 0)
                size = {"strb": 1, "strh": 2}.get(cond, 4)
                kind = vals.get(int(mm.group(1)[1:]), "?") if mm.group(1) != "ip" else "?"
                stores.append([off, size, kind])
            continue
        mm = re.fullmatch(r"(r\d+|sp|ip)(!)?, \{(.+)\}", o)
        if mm and cond == "stm" and mm.group(1) not in ("sp", "ip"):
            b = bases.get(int(mm.group(1)[1:]))
            if b is not None:
                regs = re.findall(r"r(\d+)", mm.group(3))
                for k, r in enumerate(regs):
                    stores.append([b + 4 * k, 4, vals.get(int(r), "?")])
                if mm.group(2):  # writeback: the base advances for later stores
                    bases[int(mm.group(1)[1:])] = b + 4 * len(regs)
            continue
    return stores


def ops_seq(start, end):
    """Mnemonic sequence with conditions and sizes stripped."""
    ce, pool = fn.code_end(start, end)
    ops = []
    for a in range(start, ce, 4):
        if a in pool:
            continue
        ins = fn.dis1(a)
        if ins is None:
            continue
        ops.append(ins.mnemonic.split(".")[0])
    return ops


def dna_of(start, end):
    calls, pools = [], []
    ce, pool = fn.code_end(start, end)
    for a in range(start, ce, 4):
        if a in pool:
            pools.append([a - start, fn.rd32(a)])
            continue
        ins = fn.dis1(a)
        if ins and ins.mnemonic.split(".")[0] in ("bl", "blx") and ins.op_str.startswith("#"):
            calls.append(int(ins.op_str[1:], 0))
        m = re.search(r"\[pc, #(-?0x[0-9a-f]+|-?\d+)\]", ins.op_str) if ins else None
        if m and ins.mnemonic.startswith(("ldr", "vldr")):
            la = ins.address + 8 + int(m.group(1), 0)
            if fn.in_text(la):
                pools.append([la - start, fn.rd32(la & ~3)])
    return {
        "addr": "%08X" % start,
        "size": end - start,
        "ops": " ".join(ops_seq(start, end)),
        "stores": store_map(start, end),
        "calls": ["%08X" % c for c in calls],
        "pools": pools,
    }


def build_index():
    """Build logs/dna.jsonl incrementally; safe to restart after a crash.

    Records are appended one function at a time and already-present addresses
    are skipped on restart, so an interrupted build resumes where it stopped.
    """
    os.makedirs(os.path.dirname(DNA_FILE), exist_ok=True)
    done = set()
    if os.path.exists(DNA_FILE):
        for line in open(DNA_FILE):
            try:
                done.add(json.loads(line)["addr"])
            except ValueError:  # truncated last line from a crash
                break
    starts = fn.STARTS
    n_new = 0
    with open(DNA_FILE, "a") as fh:
        for i, s in enumerate(starts):
            addr = "%08X" % s
            if addr in done:
                continue
            e = starts[i + 1] if i + 1 < len(starts) else fn.TEXT_END
            fh.write(json.dumps(dna_of(s, e)) + "\n")
            n_new += 1
            if n_new % 2000 == 0:
                fh.flush()
                print("[%d/%d] (+%d done)" % (i + 1, len(starts), n_new), file=sys.stderr)
    print("%d new records, %d total -> %s" % (n_new, len(done) + n_new, DNA_FILE))


# --- query -------------------------------------------------------------------


def load_index():
    recs = []
    for line in open(DNA_FILE):
        try:
            recs.append(json.loads(line))
        except ValueError:  # truncated last line from a crash
            break
    return recs


def load_status():
    d = json.load(open(os.path.join(ROOT, "functions.json")))
    return d


def rank_twins(mine, idx):
    """Scored structural twins for one DNA record, best first."""
    ops = mine["ops"].split()
    smine = [(o, s) for o, s, _ in mine["stores"]]
    scored = []
    for r in idx:
        if r["addr"] == mine["addr"]:
            continue
        ro = r["ops"].split()
        if abs(len(ro) - len(ops)) > max(8, len(ops) // 2):
            continue
        sim = difflib.SequenceMatcher(None, ops, ro).ratio()
        if smine and smine == [(o, s) for o, s, _ in r["stores"]]:
            sim += 0.15
        scored.append((sim, r))
    scored.sort(key=lambda t: -t[0])
    return scored


def query(addr, as_json=False):
    addr = int(addr, 16)
    if not os.path.exists(DNA_FILE):
        build_index()
    idx = load_index()
    mine = next(r for r in idx if int(r["addr"], 16) == addr)
    status = load_status()
    scored = rank_twins(mine, idx)
    rows = []
    for sim, r in scored[:15]:
        entry = status.get(r["addr"])
        rows.append({
            "sim": round(sim, 3),
            "addr": r["addr"],
            "size": r["size"],
            "status": entry["status"] if entry else "UNMATCHED",
            "path": entry.get("path") if entry else None,
            "stores": r["stores"][:6],
        })
    # suggested next action: best registered twin, else synthesize
    twin = next((t for t in rows if t["path"]), None)
    nxt = ("twin:%s" % twin["path"]) if twin else "synthesize"
    if as_json:
        print(json.dumps({"target": mine, "twins": rows, "next": nxt}))
        return
    print("target func_%s  %d bytes  %d stores  %d calls" % (mine["addr"], mine["size"], len(mine["stores"]), len(mine["calls"])))
    print("stores: %s" % mine["stores"][:12])
    for t in rows:
        print("  %.2f  func_%s  %4dB  %-12s %s  %s" % (t["sim"], t["addr"], t["size"], t["status"], t["path"] or "", t["stores"]))
    print("NEXT %s" % nxt)


def acceptance(n=20, seed=42, as_json=False):
    """Phase-1 gate (AUTOMATION_PLAN.md): rank quality on known matches.

    Samples n honest-matched functions and checks their query results:
      twin  — top-5 contains another function registered from the SAME source
              file (the true structural twin);
      any   — top-5 contains any function with a registered source path
              (a usable starting skeleton for an unmatched target).
    """
    if not os.path.exists(DNA_FILE):
        build_index()
    idx = load_index()
    status = load_status()
    honest = [(k, v) for k, v in status.items() if v["status"] == "honest" and v.get("path")]
    random.seed(seed)
    sample = random.sample(honest, min(n, len(honest)))
    path_counts = {}
    for v in status.values():
        if v.get("path"):
            path_counts[v["path"]] = path_counts.get(v["path"], 0) + 1
    rows, n_twin, n_any, n_elig = [], 0, 0, 0
    for key, entry in sample:
        mine = next(r for r in idx if r["addr"] == key)
        top = [r for _, r in rank_twins(mine, idx)[:5]]
        eligible = path_counts[entry["path"]] > 1
        twin = any(status.get(r["addr"], {}).get("path") == entry["path"] for r in top)
        any_matched = any(status.get(r["addr"], {}).get("path") for r in top)
        n_elig += eligible
        n_twin += twin
        n_any += any_matched
        rows.append({"addr": key, "path": entry["path"], "eligible": eligible,
                     "twin_top5": twin, "matched_top5": any_matched})
    summary = {"n": len(sample), "matched_twin_top5": n_any,
               "same_source_twin_top5": n_twin, "same_source_eligible": n_elig}
    if as_json:
        print(json.dumps({"summary": summary, "results": rows}))
        return
    for r in rows:
        print("%s  twin=%-5s matched=%-5s %s" % (r["addr"], r["twin_top5"], r["matched_top5"], r["path"]))
    print("summary: %d/%d matched twin in top-5; same-source twin %d/%d of eligible" % (n_any, len(sample), n_twin, n_elig))


def show(addr, as_json=False):
    addr = int(addr, 16)
    s, e = fn.func_range(addr)
    r = dna_of(s, e)
    print(json.dumps(r, indent=1 if not as_json else None))


def offset(off):
    """Grep the Ghidra pseudocode dumps for a struct-offset access."""
    off = int(off, 0)
    pats = ["+%d" % off, "+ 0x%x" % off, "0x%x" % off]
    hits = 0
    for name in sorted(os.listdir(PSEUDO)):
        text = open(os.path.join(PSEUDO, name), errors="replace").read()
        for line in text.splitlines():
            if any(re.search(r"\b" + re.escape(p) + r"\b", line) for p in pats):
                print("%s: %s" % (name, line.strip()[:110]))
                hits += 1
                if hits > 40:
                    print("... (more)")
                    return


if __name__ == "__main__":
    args = sys.argv[1:]
    as_json = "--json" in args
    args = [a for a in args if a != "--json"]
    if not args:
        print(__doc__)
    elif args[0] == "index":
        build_index()
    elif args[0] == "query":
        query(args[1], as_json=as_json)
    elif args[0] == "show":
        show(args[1], as_json=as_json)
    elif args[0] == "offset":
        offset(args[1])
    elif args[0] == "acceptance":
        n = int(args[1]) if len(args) > 1 else 20
        acceptance(n, as_json=as_json)
    else:
        print(__doc__)
