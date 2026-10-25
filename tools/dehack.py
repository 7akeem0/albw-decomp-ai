#!/usr/bin/env python3
"""De-hack sweep: try to convert `weak` and `__schedule_barrier` hack matches
to honest matches by removing the hack construct from the source and
re-checking (with the original flags, then --apcs=/fpic for weak hacks).

Only entries whose hack_reasons are a subset of {weak, __schedule_barrier}
are attempted. Other hack kinds (asm, identical_arms, perm_t, dummies) need
case-by-case source work and are skipped.

Usage: python tools/dehack.py [--limit N]
Logs to logs/dehack_progress.jsonl; functions.json is updated in place
(backup written to functions.json.bak). Source files are restored on failure.
"""
import json
import os
import re
import shutil
import signal
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

DEFAULT_CC = "4.1/b1049"
DEFAULT_FLAGS = "--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections"
LOG = ROOT / "logs" / "dehack_progress.jsonl"

WEAK_RE = re.compile(
    r"__attribute__\s*\(\(\s*(?:__)?weak(?:__)?\s*\)\)\s*|__WEAK\b|\b__weak\b"
)
BARRIER_RE = re.compile(r"__schedule_barrier\s*\(\s*\)\s*;?")


def save_functions(functions):
    """Write functions.json in the repo's exact canonical format."""
    redumped = json.dumps(functions, indent=2, sort_keys=True)
    (ROOT / "functions.json").write_text(
        "\n".join(line.lstrip() for line in redumped.split("\n")))


def log(record):
    LOG.parent.mkdir(exist_ok=True)
    with open(LOG, "a") as f:
        f.write(json.dumps(record) + "\n")


def run_check(src, addr, cc, flags, timeout=300):
    """Run `fn.py check` in a killable subprocess. Returns (matched, detail).

    The wine/box64 layer occasionally hangs; a fresh interpreter per check
    lets us kill the whole process group on timeout.
    """
    cmd = [sys.executable, str(ROOT / "tools" / "fn.py"), "check",
           src, hex(addr), "--cc", cc, "--flags", flags]
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL,
                             text=True, cwd=ROOT, start_new_session=True)
    try:
        out, _ = proc.communicate(timeout=timeout)
    except subprocess.TimeoutExpired:
        os.killpg(proc.pid, signal.SIGKILL)
        proc.wait()
        return False, "TIMEOUT"
    out = (out or "").strip()
    return "RESULT: MATCH" in out, (out.splitlines() or [""])[-1]


def check_all(entries, fpic):
    """Check every entry against the (possibly fpic-rewritten) file.

    Each entry uses its own recorded flags/cc; `fpic` rewrites
    --apcs=/interwork to --apcs=/fpic in each.
    Returns (ok, detail).
    """
    for key, entry in entries:
        if entry.get("status") in ("excluded", "no_source"):
            continue
        cc = entry.get("cc") or DEFAULT_CC
        flags = entry.get("flags") or DEFAULT_FLAGS
        if fpic:
            flags = flags.replace("--apcs=/interwork", "--apcs=/fpic")
        try:
            matched, last = run_check(entry["path"], int(key, 16), cc, flags)
        except Exception as e:
            return False, f"addr {key}: {e}"
        if not matched:
            return False, f"addr {key}: {last}"
    return True, None


def main():
    limit = None
    if "--limit" in sys.argv:
        limit = int(sys.argv[sys.argv.index("--limit") + 1])
    skip = 0
    if "--skip" in sys.argv:
        skip = int(sys.argv[sys.argv.index("--skip") + 1])

    functions = json.loads((ROOT / "functions.json").read_text())
    bak = ROOT / "functions.json.bak"
    if not bak.exists():
        shutil.copy(ROOT / "functions.json", bak)

    # group entries by file: every functions.json entry sharing the file must
    # still match after the edit, not just the hack entry
    by_file = {}
    for key, entry in functions.items():
        if entry.get("path"):
            by_file.setdefault(entry["path"], []).append((key, entry))

    groups = []
    for key, entry in functions.items():
        if entry.get("status") != "hack" or not entry.get("path"):
            continue
        reasons = set(entry.get("hack_reasons", []))
        if not reasons or not reasons <= {"weak", "__schedule_barrier"}:
            continue
        if not any(g["path"] == entry["path"] for g in groups):
            groups.append({
                "path": entry["path"],
                "reasons": reasons,
                "entries": by_file[entry["path"]],
            })

    stats = {"ok_orig": 0, "ok_fpic": 0, "fail": 0, "skip": 0}
    for i, group in enumerate(groups):
        if i < skip:
            continue
        if limit and i >= skip + limit:
            break
        path = ROOT / group["path"]
        orig = path.read_text(errors="replace")
        new = transform(orig, group["reasons"])
        label = f"[{i+1}/{len(groups)}] {group['path']}"

        if new == orig:
            stats["skip"] += 1
            log({"path": group["path"], "result": "skip_no_textual_change"})
            continue

        path.write_text(new)
        attempts = [(False, "fail"), (True, "fail_fpic")]
        result, detail = None, None
        for fpic, fail_name in attempts:
            ok, detail = check_all(group["entries"], fpic)
            if ok:
                result = "ok_fpic" if fpic else "ok_orig"
                break
            fail_name_used = fail_name

        if result:
            stats[result] += 1
            for key, entry in group["entries"]:
                if entry.get("status") in ("excluded", "no_source"):
                    continue
                if entry.get("status") == "hack":
                    entry["status"] = "honest"
                    entry["hack_reasons"] = []
                if result == "ok_fpic":
                    entry["flags"] = (entry.get("flags") or DEFAULT_FLAGS).replace(
                        "--apcs=/interwork", "--apcs=/fpic")
            save_functions(functions)
        else:
            stats["fail"] += 1
            path.write_text(orig)  # restore
        log({"path": group["path"], "result": result or fail_name_used,
             "detail": detail})
        print(f"{label}: {result or fail_name_used}", flush=True)

    print("DONE", json.dumps(stats), flush=True)


def transform(text, reasons):
    if "weak" in reasons:
        text = WEAK_RE.sub("", text)
    if "__schedule_barrier" in reasons:
        text = BARRIER_RE.sub("", text)
    return text


if __name__ == "__main__":
    main()
