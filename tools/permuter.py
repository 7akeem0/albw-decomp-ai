"""Automated variant sweep for a near-miss function (ZeldaRET-permuter style, local armcc+wine).

  python tools/permuter.py <addr> <spec.py> [--jobs 2] [--stop-on-match]

spec.py defines:
  TEMPLATE - source string with {slot} placeholders
  GRID     - dict: slot -> list of candidate substitution strings (cartesian product)
  FLAGS    - optional list of flag-sets to sweep (default: fn.py default flags only)
  SYM      - optional mangled-name substring passed to fn.py check --sym

Each variant is compiled and checked by `fn.py check` in its own process group
(wine can hang: every child is killpg'd on timeout). Results ranked by word
score; the full sweep log lands beside the variants, matches print the source.
"""
import importlib.util, itertools, os, re, shutil, signal, subprocess, sys, tempfile, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PATH_PREFIX = "/data/data/com.termux/files/usr/bin:"
RESULT_RE = re.compile(r"RESULT: (MATCH|NO MATCH)\s+(\d+)/(\d+) words \(([\d.]+)%\)\s+similarity ([\d.]+)%")


def check_one(workdir, src, addr, flags, sym, timeout=300):
    env = dict(os.environ, PATH=PATH_PREFIX + os.environ.get("PATH", ""))
    args = ["python", os.path.join(ROOT, "tools", "fn.py"), "check", src, "0x%08X" % addr,
            "--cc", "4.1/b1049", "--flags", flags]
    if sym:
        args += ["--sym", sym]
    p = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True,
                         cwd=ROOT, env=env, start_new_session=True)
    try:
        out, _ = p.communicate(timeout=timeout)
    except subprocess.TimeoutExpired:
        os.killpg(os.getpgid(p.pid), signal.SIGKILL)
        return dict(match=False, words=0, total=0, sim=0.0, err="TIMEOUT", out="")
    m = RESULT_RE.search(out)
    if "COMPILE ERROR" in out:
        first = out.splitlines()
        err = next((l for l in first if "error" in l.lower()), "compile error")[:120]
        return dict(match=False, words=0, total=0, sim=0.0, err=err, out=out)
    if not m:
        return dict(match=False, words=0, total=0, sim=0.0, err="NO OUTPUT", out=out)
    return dict(match=m.group(1) == "MATCH", words=int(m.group(2)), total=int(m.group(3)),
                sim=float(m.group(5)), err="", out=out)


def main():
    addr = int(sys.argv[1], 16)
    spec_path = sys.argv[2]
    jobs = int(sys.argv[sys.argv.index("--jobs") + 1]) if "--jobs" in sys.argv else 2
    stop_on_match = "--stop-on-match" in sys.argv

    spec = importlib.util.spec_from_file_location("perm_spec", spec_path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)

    slots = sorted(mod.GRID)
    combos = list(itertools.product(*(mod.GRID[k] for k in slots)))
    flagsets = getattr(mod, "FLAGS", [None])
    total = len(combos) * len(flagsets)
    print(f"{len(combos)} variants x {len(flagsets)} flag-sets = {total} checks")

    workdir = os.path.join(tempfile.gettempdir(), "perm_%08X" % addr)
    shutil.rmtree(workdir, ignore_errors=True)
    os.makedirs(workdir)
    results = []

    def run(idx_fl):
        idx, fi = idx_fl
        sub = dict(zip(slots, combos[idx]))
        # unique file per (variant, flag-set): fn.py derives the .o from the source name
        src = os.path.join(workdir, "v%04d_f%d.cpp" % (idx, fi))
        text = mod.TEMPLATE
        for k, v in sub.items():
            text = text.replace("{%s}" % k, v)
        with open(src, "w") as fh:
            fh.write(text)
        fl = flagsets[fi]
        flags = fl if fl else "--cpu=MPCore --fpmode=fast --apcs=/interwork -O3 -Otime --split_sections"
        r = check_one(workdir, src, addr, flags, getattr(mod, "SYM", None))
        r.update(idx=idx, flags=flags, src=src, **sub)
        return r

    from concurrent.futures import ThreadPoolExecutor, as_completed
    t0 = time.time()
    all_jobs = [(i, fi) for i in range(len(combos)) for fi in range(len(flagsets))]
    pending = []
    with ThreadPoolExecutor(max_workers=jobs) as ex:
        pending = [ex.submit(run, j) for j in all_jobs]
            
        for i, fut in enumerate(as_completed(pending)):
            r = fut.result()
            results.append(r)
            tag = "MATCH" if r["match"] else f"{r['words']}/{r['total']}"
            print(f"[{i+1}/{total}] v{r['idx']:04d} {' '.join(f'{k}={r[k][:24]}' for k in slots if r.get(k))} "
                  f"[{' '.join(r['flags'].split()[-3:-1])}] {tag} sim={r['sim']:.1f}" + (f" ERR: {r['err']}" if r["err"] else ""))
            if r["match"] and stop_on_match:
                for p in pending:
                    p.cancel()
                break

    results.sort(key=lambda r: (r["match"], r["words"] / max(r["total"], 1), r["sim"]), reverse=True)
    log = os.path.join(workdir, "results.txt")
    with open(log, "w") as fh:
        for r in results:
            fh.write("%s v%04d %s/%s sim=%.1f flags='%s'\n" % (
                "MATCH" if r["match"] else "     ", r["idx"], r["words"], r["total"], r["sim"], r["flags"]))
    print(f"\nbest of {len(results)} in {time.time()-t0:.0f}s | log: {log}")
    for r in results[:5]:
        print(f"  v{r['idx']:04d} {'MATCH' if r['match'] else ''} {r['words']}/{r['total']} sim={r['sim']:.1f} {r['flags']}")
    if results and results[0]["match"]:
        print(f"\nWINNER: {results[0]['src']}")
        print(open(results[0]["src"]).read())


if __name__ == "__main__":
    main()
