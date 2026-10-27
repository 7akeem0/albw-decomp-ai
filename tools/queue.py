"""Queue driver (automation phase 5): the small-agent loop in one command.

  python tools/queue.py next [--budget 60] [--region LO-HI] [--json]
  python tools/queue.py register <addr> [--src PATH] [--json]
  python tools/queue.py report [--json]
  python tools/queue.py status [--json]

`next` pulls the smallest unindexed candidate (triage, refreshed), skips
negative recipes and already-attempted shapes, and prints the ONE command to
run. Outcomes of earlier suggestions are learned from refine's own state
(logs/refine/<addr>/state.json): a MATCH waiting for registration becomes a
`register` suggestion; DEFER/BUDGET functions are skipped and show up in
`report` for manual review. Eligibility: a synth class, or an ops-sequence
twin with a registered source (exact mnemonic-sequence match in the dna
index). Nothing registers without fn.py check printing RESULT: MATCH —
`register` re-verifies the source at its final registered path.

State: logs/autodecomp/state.json. Subprocesses run with hard timeouts
(OOM/hang rules live here, not in the agent's memory).
"""
import argparse
import json
import os
import re
import signal
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import fn
import synth
from permuter import check_one
from sweep import DEFAULT_FLAGS

ROOT = fn.ROOT
STATE_DIR = os.path.join(ROOT, "logs", "autodecomp")
STATE_FILE = os.path.join(STATE_DIR, "state.json")
CAND_FILE = os.path.join(ROOT, "logs", "triage", "unindexed_candidate.txt")
AUTO_DIR = os.path.join(ROOT, "src", "work8", "auto")
DEFAULT_CC = "4.1/b1049"
INCLUDE_LINE = re.compile(r'(\s*#include\s+")([^"]+)(")')


def load_state():
    if os.path.exists(STATE_FILE):
        return json.load(open(STATE_FILE))
    return {"attempted": {}, "registered": []}


def save_state(state):
    os.makedirs(STATE_DIR, exist_ok=True)
    json.dump(state, open(STATE_FILE, "w"), indent=1)


def load_status():
    return json.load(open(os.path.join(ROOT, "functions.json")))


def run_checked(argv, timeout):
    """Subprocess with a hard timeout, killed as a process group on hang."""
    p = subprocess.Popen(argv, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                         text=True, cwd=ROOT, start_new_session=True)
    try:
        out, _ = p.communicate(timeout=timeout)
    except subprocess.TimeoutExpired:
        os.killpg(os.getpgid(p.pid), signal.SIGKILL)
        return None
    return out


def candidates():
    """Fresh smallest-first candidate list (triage rerun drops registered)."""
    if run_checked([sys.executable, os.path.join("tools", "triage.py")],
                   timeout=180) is None or not os.path.exists(CAND_FILE):
        sys.exit("triage refresh failed (timeout or no candidates file)")
    out = []
    for line in open(CAND_FILE):
        parts = line.split()
        if len(parts) == 2:
            out.append((int(parts[0], 16), int(parts[1])))
    return out


def refine_state(addr):
    p = os.path.join(ROOT, "logs", "refine", "%08X" % addr, "state.json")
    return json.load(open(p)) if os.path.exists(p) else None


def ops_twin_map():
    """ops-sequence -> registered source paths, for twin eligibility."""
    import dna
    if not os.path.exists(dna.DNA_FILE):
        dna.build_index()
    status = load_status()
    m = {}
    for r in dna.load_index():
        entry = status.get(r["addr"])
        if entry and entry.get("path") and entry["status"] in ("honest", "hack"):
            m.setdefault(r["ops"], []).append(entry["path"])
    return m


# ----------------------------------------------------------------------- next

def next_candidate(budget, region, scan_cap=60, as_json=False):
    state = load_state()
    status = load_status()
    lo, hi = (int(x, 16) for x in region.split("-")) if region else (None, None)
    twins = None
    skipped, scanned, chosen = [], 0, None
    for addr, size in candidates():
        key = "%08X" % addr
        if key in status or key in state["registered"]:
            continue
        if lo is not None and not lo <= addr < hi:
            continue
        scanned += 1
        if scanned > scan_cap:
            break
        if key in state["attempted"]:
            skipped.append((key, size, "attempted:" + state["attempted"][key].get("status", "?")))
            continue
        # learn the outcome of a previous `next` suggestion from refine's state
        rstate = refine_state(addr)
        if rstate:
            if rstate["best"].get("match"):
                chosen = dict(addr=key, size=size, outcome="MATCH-unregistered",
                              origin=rstate["origin"], checks=rstate["used"])
                break
            state["attempted"][key] = {
                "status": rstate.get("status", "?"), "checks": rstate["used"],
                "origin": rstate["origin"], "size": size}
            skipped.append((key, size, "refined:" + rstate.get("status", "?")))
            continue
        try:
            s, e, ins = synth.view(addr)
        except Exception as exc:
            state["attempted"][key] = {"status": "error", "reason": str(exc)[:60], "size": size}
            skipped.append((key, size, "view-error"))
            continue
        neg = synth.check_negative(ins)
        if neg:
            state["attempted"][key] = {"status": "negative", "recipe": neg, "size": size}
            skipped.append((key, size, "negative:" + neg))
            continue
        cls = synth.classify(ins)
        if cls:
            chosen = dict(addr=key, size=size, outcome="new", cls=cls)
            break
        # no synth class: still worth a shot if a registered twin has the
        # exact same mnemonic sequence (refine's auto start uses it)
        if twins is None:
            twins = ops_twin_map()
        import dna
        ops = " ".join(dna.ops_seq(s, e))
        if twins.get(ops):
            chosen = dict(addr=key, size=size, outcome="new", cls="twin:" + twins[ops][0])
            break
        state["attempted"][key] = {"status": "no-start", "size": size}
        skipped.append((key, size, "no synth class, no ops twin"))
    save_state(state)
    if as_json:
        print(json.dumps({"chosen": chosen, "skipped": skipped[:12]}))
    if chosen is None:
        print("QUEUE EMPTY within scan cap %d (%d skipped this pass)" % (scan_cap, len(skipped)))
        print("NEXT  python tools/queue.py report  # manual review backlog")
        return
    if chosen["outcome"] == "MATCH-unregistered":
        print("CANDIDATE 0x%s (%dB) refined to MATCH but not registered yet" % (
            chosen["addr"], chosen["size"]))
        print("NEXT  python tools/queue.py register 0x%s" % chosen["addr"])
    else:
        print("CANDIDATE 0x%s (%dB, %s, no negative recipe)" % (
            chosen["addr"], chosen["size"], chosen["cls"]))
        print("NEXT  python tools/refine.py 0x%s --budget %d" % (chosen["addr"], budget))
    if skipped:
        print("  (%d earlier candidates skipped: %s%s)" % (
            len(skipped), ", ".join("%s(%s)" % (k, r) for k, _s, r in skipped[:6]),
            " ..." if len(skipped) > 6 else ""))


# ------------------------------------------------------------------- register

def rebase_includes(text, dest_dir):
    """Absolute #includes (twin fixups) -> paths relative to the dest file."""
    out = []
    for line in text.splitlines():
        m = INCLUDE_LINE.match(line)
        if m and m.group(2).startswith(ROOT):
            line = m.group(1) + os.path.relpath(m.group(2), dest_dir) + m.group(3)
        out.append(line)
    return "\n".join(out) + "\n"


def register(addr, src=None, flags=None, as_json=False):
    """Verify the source at its FINAL path, then update functions.json.

    Refuses unless fn.py check prints RESULT: MATCH for the registered file.
    Defaults come from refine's state (best.c, winning flags).
    """
    key = "%08X" % addr
    sd = os.path.join(ROOT, "logs", "refine", key)
    rstate = refine_state(addr)
    if src is None:
        src = os.path.join(sd, "best.c")
    if flags is None:
        flags = rstate["best"]["flags"] if rstate else DEFAULT_FLAGS
    if not os.path.exists(src):
        sys.exit("no source to register: %s (run refine.py first or pass --src)" % src)

    os.makedirs(AUTO_DIR, exist_ok=True)
    ext = os.path.splitext(src)[1] or ".c"
    dest = os.path.join(AUTO_DIR, "func_%s%s" % (key, ext))
    text = rebase_includes(open(src).read(), AUTO_DIR)
    open(dest, "w").write(text)

    # path audit: registered sources include nothing absolute
    bad = [m.group(2) for m in INCLUDE_LINE.finditer(text) if m.group(2).startswith("/")]
    if bad:
        os.unlink(dest)
        sys.exit("PATH AUDIT FAILED: absolute include survived rewrite: %s" % bad[0])

    r = check_one(AUTO_DIR, dest, addr, flags, None)
    if os.path.exists(dest + ".o"):
        os.unlink(dest + ".o")
    if not r["match"]:
        print("REFUSED: fn.py check says %s %d/%d words" % (
            r["err"] or "NO MATCH", r["words"], r["total"]))
        print("  source kept (unregistered) at %s" % dest)
        return
    rel = os.path.relpath(dest, ROOT)
    print("RESULT: MATCH %d/%d words  ->  %s" % (r["words"], r["total"], rel))

    status = load_status()
    status[key] = {"cc": DEFAULT_CC, "flags": flags, "hack_reasons": [],
                   "path": rel, "status": "honest"}
    # canonical format: indent=1 with every line lstripped (flat left margin,
    # as the rest of the repo's json files)
    out = json.dumps(status, indent=1, sort_keys=True)
    with open(os.path.join(ROOT, "functions.json"), "w") as fh:
        fh.write("\n".join(l.lstrip() for l in out.splitlines()))
    state = load_state()
    state["registered"].append(key)
    state["attempted"].pop(key, None)
    save_state(state)
    if as_json:
        print(json.dumps({"addr": key, "path": rel, "status": "honest", "flags": flags}))
    print("functions.json: %s -> honest" % key)
    print("NEXT  git add %s functions.json && git commit -m \"Match %s (auto refine)\"" % (
        rel, key))


# --------------------------------------------------------------------- report

def report(as_json=False):
    """Near-miss table: every attempted-but-unmatched function, closest first."""
    state = load_state()
    status = load_status()
    rows = []
    for key, info in state["attempted"].items():
        if key in status:
            continue
        rstate = refine_state(int(key, 16))
        if not rstate:
            rows.append(dict(addr=key, kind=info.get("status", "?"), frac=0.0,
                             hypothesis="no refine state (negative / no-start / error)"))
            continue
        b = rstate["best"]
        if b.get("match"):
            rows.append(dict(addr=key, kind="MATCH-unregistered", frac=1.0,
                             hypothesis="run: python tools/queue.py register 0x%s" % key))
            continue
        frac = b["words"] / b["total"] if b["total"] else 0.0
        if b["n_op"] == 0 and b["n_reg"] > 0:
            hyp = "allocation-only delta: statement order / locals / flag variants"
        elif b["perm"]:
            hyp = "pure reordering: BODY permutation sweep (sweep.py)"
        elif rstate["origin"].startswith("twin"):
            hyp = "twin is the wrong construct: try the synth skeleton or sweep"
        else:
            hyp = "construct differs (%d OP): check recipes / sweep this shape" % b["n_op"]
        if rstate.get("status") == "BUDGET":
            hyp += "; budget exhausted — retry with a higher --budget first"
        rows.append(dict(addr=key, kind="OP=%d REG=%d%s" % (b["n_op"], b["n_reg"],
                                                           " PERM" if b["perm"] else ""),
                         frac=frac, checks=rstate["used"], origin=rstate["origin"],
                         hypothesis=hyp))
    rows.sort(key=lambda r: -r["frac"])
    if as_json:
        print(json.dumps(rows))
        return
    print("near-miss backlog (%d, closest first):" % len(rows))
    for r in rows:
        print("  %s  %-16s %3.0f%%  %s" % (
            r["addr"], r["kind"], r["frac"] * 100, r["hypothesis"][:96]))
    print("NEXT  pick one: refine.py with a higher budget, or sweep.py by hand")


def status_summary(as_json=False):
    state = load_state()
    n_cand = sum(1 for _ in open(CAND_FILE)) if os.path.exists(CAND_FILE) else -1
    waiting = sum(1 for k in state["attempted"]
                  if (refine_state(int(k, 16)) or {}).get("best", {}).get("match"))
    s = {"candidates": n_cand, "attempted": len(state["attempted"]),
         "registered": len(state["registered"]), "match_waiting": waiting}
    if as_json:
        print(json.dumps(s))
    else:
        print("queue: %s candidates, %d attempted, %d registered, %d waiting to register" % (
            s["candidates"], s["attempted"], s["registered"], s["match_waiting"]))


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("cmd", choices=["next", "register", "report", "status"])
    ap.add_argument("addr", nargs="?")
    ap.add_argument("--budget", type=int, default=60)
    ap.add_argument("--region")
    ap.add_argument("--src")
    ap.add_argument("--flags", help="override flags (default: refine state / fn.py defaults)")
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    if a.cmd == "next":
        next_candidate(a.budget, a.region, as_json=a.json)
    elif a.cmd == "register":
        if not a.addr:
            sys.exit("register needs an address")
        register(int(a.addr, 16), src=a.src, flags=a.flags, as_json=a.json)
    elif a.cmd == "report":
        report(as_json=a.json)
    else:
        status_summary(as_json=a.json)


if __name__ == "__main__":
    main()
