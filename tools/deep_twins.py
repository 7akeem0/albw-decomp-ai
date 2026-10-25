#!/usr/bin/env python
"""Find and harvest near-twins that differ in immediate constants.

Same idea as tools/twins.py, but the shape mask also hides data-processing
immediates and load/store offsets. For each (matched anchor, candidate) pair
the tool attempts a clone: callee substitution (branch targets), extern-name
substitution (literal-pool words pointing into the image), and constant
substitution (decoded instruction immediates). The clone is kept only if
`fn.py check` verifies it byte-exactly.

Usage:
  deep_twins.py            dry run: report deep groups
  deep_twins.py --attempt  harvest: write clones, verify, register
"""

import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TA = 0x100000
MAX_DIFF_WORDS = 24

sys.path.insert(0, os.path.join(ROOT, "tools"))
import clone_twin as ct  # words/rng/branch_target over code.bin  # noqa: E402


def deep_mask(w):
    """Mask branch targets, in-image literals, dataproc immediates, ldr/str offsets."""
    if ct.branch_target(w, 0) is not None and (w & 0x0E000000) in (0x0A000000, 0x0B000000):
        return w & 0xFF000000
    if (w & 0xFE000000) == 0xFA000000:
        return w & 0xFF000000
    if 0x00100000 <= w < 0x00800000:
        return 0xFFFFFFFF
    if (w >> 26) & 3 == 0:  # data processing
        if (w >> 25) & 1:
            return (w & 0xFFFFF000) | 0xFFF  # rot-imm operand2
        return w  # register operand: shape must match
    if (w >> 25) & 7 == 2:  # single data transfer (imm12 offset form)
        if not (w & 0x02000000):
            return w & 0xFFF00FFF  # mask imm12, keep U/L/B/P bits
        return w
    return w


def imm_value(w):
    """Decoded immediate of a data-processing word (I=1), else None."""
    if (w >> 26) & 3 == 0 and (w >> 25) & 1:
        imm8 = w & 0xFF
        rot = ((w >> 8) & 0xF) * 2
        return (imm8 >> rot | imm8 << (32 - rot)) & 0xFFFFFFFF if rot else imm8
    return None


def ls_offset(w):
    """Signed offset of an ldr/str imm12 word, else None."""
    if (w >> 25) & 7 == 2 and not (w & 0x02000000):
        off = w & 0xFFF
        return -off if not (w & 0x00800000) else off
    return None


def pc_relative(w):
    return ((w >> 25) & 7 == 2 and not (w & 0x02000000)
            and ((w >> 16) & 0xF) == 0xF)  # ldr rX, [pc, #imm]


def const_forms(val):
    """Source spellings of a constant: hex, decimal, parenthesised negative."""
    if val >= 0:
        return [f"0x{val:x}", f"0x{val:X}", str(val)]
    return [f"(-0x{-val:x})", f"(-0x{-val:X})", f"(-{-val})"]


def substitute_constants(src, anchor_w, cand_w):
    """Replace anchor constant(s) encoded in anchor_w with candidate's.

    Returns a list of candidate sources (replace-all first, then each single
    occurrence), or ([], reason) when the constant cannot be substituted.
    """
    aw, cw = anchor_w, cand_w
    if (aw >> 28) != (cw >> 28) or (aw & 0x0FF00000) != (cw & 0x0FF00000):
        return None, f"opcode/cond differ: {aw:08X} vs {cw:08X}"
    iv, cv = imm_value(aw), imm_value(cw)
    if iv is not None and imm_value(cw) is not None:
        pass
    elif iv is None and ls_offset(aw) is not None and ls_offset(cw) is not None:
        iv, cv = ls_offset(aw), ls_offset(cw)
    else:
        return None, f"no immediate to substitute: {aw:08X} vs {cw:08X}"
    if iv == cv:
        return src, 0
    new = const_forms(cv)[0] if cv >= 0 else const_forms(cv)[-1]
    pattern = re.compile(r"(?<![\w.])" + re.escape(const_forms(iv)[0]) + r"(?![\w.])")
    matches = list(pattern.finditer(src))
    if not matches:
        return [], f"constant {iv} not found in source"
    variants = [pattern.sub(new, src)]  # replace all occurrences
    if 1 < len(matches) <= 4:  # maybe only one of the identical literals moved
        for m in matches:
            pre, post = src[:m.start()], src[m.end():]
            variants.append(pre + new + post)
    return variants, len(matches)


def attempt_clone(anchor, cand, anchor_entry, verbose=False):
    """Return (ok, message). On ok, the clone is already written and verified."""
    ws_a, s_a = ct.words(anchor)
    ws_c, s_c = ct.words(cand)
    if len(ws_a) != len(ws_c):
        return False, "size differs"
    src = open(anchor_entry["path"], encoding="utf-8").read()
    log = []

    # calls: same word indices, branch in both, targets may differ
    calls_a, _ = ct.calls(anchor)
    calls_c, _ = ct.calls(cand)
    if len(calls_a) != len(calls_c):
        return False, "call count differs"
    subs = {}
    for (i, ta_), (j, tc) in zip(calls_a, calls_c):
        if i != j:
            return False, "call word indices differ"
        if ta_ == tc:
            continue  # same callee: no substitution, spelling irrelevant
        name = f"func_{ta_:08X}"
        if name in subs and subs[name] != tc:
            return False, "call sites split across targets"
        subs[name] = tc
    for name, t in sorted(subs.items(), key=lambda kv: -len(kv[0])):
        if name not in src:
            return False, f"{name} not in source"
        src = src.replace(name, f"func_{t:08X}")

    # non-branch words: literal pool pointers by extern name, immediates by value
    pool_pairs = [(w, wc) for w, wc in zip(ws_a, ws_c)
                  if w != wc and 0x100000 <= w < 0x800000]
    for w, new in pool_pairs:
        subbed = False
        for prefix in ("ro_", "data_", "func_"):
            name = f"{prefix}{w:08X}"
            if name in src:
                src = src.replace(name, f"{prefix}{new:08X}")
                log.append(f"pool {name}->{prefix}{new:08X}")
                subbed = True
                break
        if not subbed:
            return False, f"literal {w:08X}->{new:08X} has no extern name in source"

    sources = [src]
    ndiff = 0
    for i, (w, wc) in enumerate(zip(ws_a, ws_c)):
        if w == wc or ct.branch_target(w, s_a + 4 * i) is not None:
            continue
        if 0x100000 <= w < 0x800000 or 0x100000 <= wc < 0x800000:
            continue  # handled above
        if pc_relative(w) or pc_relative(wc):
            return False, f"pool layout differs at word {i}"
        ndiff += 1
        if ndiff > MAX_DIFF_WORDS:
            return False, "too many differing words"
        next_sources = []
        for s in sources:
            variants, n = substitute_constants(s, w, wc)
            if not variants:
                return False, f"word {i}: {n}"
            next_sources.extend(variants)
        sources = next_sources[:8]
        log.append(f"imm [{i}] {w:08X}->{wc:08X}")

    ext = ".cpp" if anchor_entry["path"].endswith((".cpp", ".cc", ".cxx")) else ".c"
    dest = os.path.join(ROOT, "src", "work8", "twins", f"func_{cand:08X}{ext}")
    os.makedirs(os.path.dirname(dest), exist_ok=True)
    for k, s in enumerate(sources):
        s = s.replace(f"func_{anchor:08X}", f"func_{cand:08X}")
        s = s.replace(f"f_{anchor:08X}", f"f_{cand:08X}")
        open(dest, "w", encoding="utf-8").write(s)
        if verify(dest, cand, anchor_entry):
            return True, f"MATCH variant {k} ({'; '.join(log) or 'identical shape'})"
    os.remove(dest)
    return False, "check failed"

def verify(dest, cand, anchor_entry):
    """fn.py check with the anchor's flags, then --apcs=/fpic. True on MATCH."""
    base_flags = anchor_entry.get("flags") or ""
    for flags in (base_flags, base_flags.replace("--apcs=/interwork", "--apcs=/fpic")):
        if not flags:
            continue
        cmd = [sys.executable, os.path.join(ROOT, "tools", "fn.py"), "check",
               dest, hex(cand), "--cc", anchor_entry.get("cc", "4.1/b1049"),
               "--flags", flags]
        proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL,
                                text=True, cwd=ROOT, start_new_session=True)
        try:
            out, _ = proc.communicate(timeout=300)
        except subprocess.TimeoutExpired:
            os.killpg(proc.pid, 9)
            proc.wait()
            out = ""
        if "RESULT: MATCH" in (out or ""):
            return True
    return False


def main():
    ftab = json.load(open(os.path.join(ROOT, "functions.json")))
    starts = json.load(open(os.path.join(ROOT, "funcs.json")))["starts"]
    anchors = {int(k, 16): v for k, v in ftab.items()
               if v.get("status") in ("honest", "hack") and v.get("path")}
    no_src = {int(k, 16) for k, v in ftab.items() if v.get("status") == "no_source"}
    indexed = {int(k, 16) for k in ftab}
    cands = [a for a in starts if a not in indexed and 8 <= (ct.rng(a)[1] - a)]
    cands += sorted(no_src)

    # deep-shape grouping over the union
    groups = {}
    for a in list(anchors) + cands:
        ws, s = ct.words(a)
        if not (8 <= len(ws) <= 512):
            continue
        key = (len(ws), tuple(deep_mask(w) for w in ws))
        groups.setdefault(key, []).append(a)

    cand_set = set(cands)
    pairs = []
    for key, addrs in groups.items():
        m = [a for a in addrs if a in anchors]
        c = [a for a in addrs if a in cand_set]
        if not (m and c):
            continue
        for cc in c:
            best = min(
                ((sum(1 for x, y in zip(ct.words(a)[0], ct.words(cc)[0]) if x != y), a)
                 for a in m),
                default=None,
            )
            if best:
                pairs.append((best[1], cc, best[0]))
    pairs.sort(key=lambda p: (-p[2], -ct.rng(p[1])[1]))
    pairs = [(a, c) for a, c, _ in pairs]

    print(f"deep groups with anchors+cands: candidates={len(pairs)}")
    mode = "--attempt" in sys.argv
    ok = fail = 0
    out = open(os.path.join(ROOT, "logs", "deep_twins.log"), "a")
    for anchor, cand in pairs:
        if not mode:
            print(f"{anchor:08X} <- {cand:08X}")
            continue
        try:
            good, msg = attempt_clone(anchor, cand, anchors[anchor])
        except Exception as e:  # noqa: BLE001 - log and continue the batch
            good, msg = False, f"exception: {e}"
        line = f"{cand:08X} anchor {anchor:08X}: {'OK ' if good else 'NO '}{msg}"
        print(line, flush=True)
        out.write(line + "\n")
        out.flush()
        ok += good
        fail += not good
    if mode:
        print(f"done: {ok} matched, {fail} failed")


if __name__ == "__main__":
    main()
