"""Skeleton synthesizer (automation step 3).

  python tools/synth.py 0xADDR          synthesize a starting skeleton + sweep spec
  python tools/synth.py 0xADDR --json   machine-readable result

Pipeline: negative-recipe check (refuse = defer) -> store-map skeleton ->
sweep.py spec at logs/synth/<addr>/spec.py. The skeleton is a GUESS: the
refiner (phase 4) is the loop that closes the remaining bytes; the only
registration gate stays fn.py check -> RESULT: MATCH.
"""
import json
import os
import re
import sys

import fn

ROOT = fn.ROOT
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from recipes import load as load_recipes

OUT = os.path.join(ROOT, "logs", "synth")


# ---------------------------------------------------------------- disasm view

def view(addr):
    """Mnemonic view of the function with pool refs and calls annotated."""
    s, e = fn.func_range(addr)
    ins = []
    for a in range(s, e, 4):
        w = fn.rd32(a)
        i = fn.dis1(a)
        if i is None:
            continue
        m = i.mnemonic.split(".")[0]
        if m in ("ldr", "vldr") and "pc" in i.op_str:
            mm = re.search(r"\[pc, #(-?0x[0-9a-f]+|-?\d+)\]", i.op_str)
            la = a + 8 + int(mm.group(1), 0)
            ins.append((m, "POOL %08X" % fn.rd32(la & ~3)))
            continue
        if m in ("bl", "blx") and i.op_str.startswith("#"):
            ins.append(("CALL", "CALL %08X" % int(i.op_str[1:], 0)))
            continue
        if m == "svc":
            ins.append((m, i.op_str))
            continue
        if m == "bx" or (m == "mov" and i.op_str == "r0, r0"):
            ins.append((m, i.op_str))
            continue
        ins.append((m, i.op_str))
    return s, e, ins


# ------------------------------------------------------------- class matcher

def classify(ins):
    """Map instruction view to a synthesis class or None (defer)."""
    ms = [m for m, _ in ins]
    if any(m in ("svc", "mrc", "mcr") for m in ms):
        return None
    if ms and ms[0] == "ldr" and ins[0][1].startswith("POOL") and "pc, #-4" in str(ins):
        return None
    if "vmov" in ms and "vcvt" in ms:
        return None
    if any(m.startswith("v") for m in ms):
        return None  # VFP families handled by recipes until synth learns them
    if "ldrex" in ms or "strex" in ms:
        return None
    calls = [o for m, o in ins if m == "CALL"]
    # single-call wrapper: push {r4,lr}; mov r4,r0; bl; ... pop {r4,pc}
    if len(calls) == 1 and ms and ms[0] == "push" and ms[-1] == "pop":
        return "wrapper"
    # single tail call: b target
    if len(calls) == 0 and len(ms) >= 2 and ms[-2] == "b":
        return "thunk"
    # pure store/init/setter bodies
    if calls == [] and set(ms) - {"mov", "add", "str", "strb", "strh", "strd", "stm", "ldr", "ldm", "cmp", "rsb", "mul", "orr", "and", "lsl", "lsr", "asr", "b", "bx", "bxeq", "bxne", "sub", "eor"} == set():
        if not any(m.startswith("st") for m in ms):
            return None  # pure loads: a getter/table-lookup, no skeleton form yet
        return "stores"
    if len(calls) == 1:
        return "call+stores"
    return None


# ---------------------------------------------------------------- generators

def skeleton_from_stores(addr, ins):
    """Best-effort setter/ctor lines from str-patterns against self chain."""
    body = []
    bases = {0: 0}
    for m, o in ins:
        mm = re.fullmatch(r"(r\d+), (r\d+)", o)
        if m == "mov" and mm:
            if int(mm.group(2)[1:]) in bases:
                bases[int(mm.group(1)[1:])] = bases[int(mm.group(2)[1:])]
            continue
        mm = re.fullmatch(r"(r\d+), (r\d+), #?(0x[0-9a-f]+|\d+)", o)
        if m == "add" and mm and int(mm.group(2)[1:]) in bases:
            bases[int(mm.group(1)[1:])] = bases[int(mm.group(2)[1:])] + int(mm.group(3), 0)
            continue
        mm = re.fullmatch(r"(r\d+|ip), (r\d+|ip), \[(r\d+|sp|ip)(?:, #?(-?(?:0x[0-9a-f]+|\d+)))?\](!?)", o)
        if m == "strd" and mm and mm.group(3) not in ("sp", "ip"):
            b = bases.get(int(mm.group(3)[1:]))
            if b is None:
                continue
            off = b + int(mm.group(4) or "0", 0)
            for k in (0, 1):
                v = mm.group(1 + k)
                val = "self" if v == "r0" else ("p" + v[1] if v in ("r1", "r2", "r3") else "p1")
                body.append("    *(u32*)((char*)self + 0x%x) = %s;" % (off + 4 * k, val))
            continue
        mm = re.fullmatch(r"(r\d+|ip), \[(r\d+|sp|ip)(?:, #?(-?(?:0x[0-9a-f]+|\d+)))?\](!?)", o)
        if m.startswith("str") and m != "stm" and mm and mm.group(2) not in ("sp", "ip"):
            b = bases.get(int(mm.group(2)[1:]))
            if b is None:
                continue
            off = b + (int(mm.group(3) or "0", 0))
            v = mm.group(1)
            cast = {"strb": "u8*", "strh": "u16*"}.get(m, "u32*")
            # value guess: r0=r0 (self), r1/r2/r3 = params, immediate seen earlier?
            if v == "r0":
                val = "self"
            elif v in ("r1", "r2", "r3"):
                val = "p" + v[1]
            else:
                val = "p1"  # placeholder; the refiner's VALUES wave substitutes
            body.append("    *(%s)((char*)self + 0x%x) = %s;" % (cast, off, val))
            continue
        mm = re.fullmatch(r"(r\d+|sp|ip)(!)?, \{(.+)\}", o)
        if m == "stm" and mm and mm.group(1) not in ("sp", "ip"):
            b = bases.get(int(mm.group(1)[1:]))
            if b is None:
                continue
            regs = re.findall(r"r(\d+)", mm.group(3))
            for k, r in enumerate(regs):
                off = b + 4 * k
                if r == "0":
                    val = "self"
                elif r in ("1", "2", "3"):
                    val = "p" + r
                else:
                    val = "p1"  # placeholder; the refiner's VALUES wave substitutes
                body.append("    *(u32*)((char*)self + 0x%x) = %s;" % (off, val))
            if mm.group(2):  # writeback: the base advances for later stores
                bases[int(mm.group(1)[1:])] = b + 4 * len(regs)
    return body


def skeleton(addr, cls, ins):
    if cls == "wrapper":
        # push {r4,lr}; mov r4,r0; bl helper; mov r0,r4; pop {r4,pc}
        target = [o for m, o in ins if m == "CALL"][0].split()[1]
        return ("// wrapper: forwards self, returns self\n"
                "extern void func_%s(void*);\n\n"
                "void* func_%08X(void* self) {\n"
                "    func_%s(self);\n"
                "    return self;\n"
                "}\n" % (target, addr, target))
    if cls == "thunk":
        # b target with arg-preserving regs
        tgt = [o for m, o in ins if m == "b"][0].split()[1]
        tgt = re.sub(r"[^0-9a-fA-Fx]", "", tgt)
        return ("// tail thunk\nextern void func_%s(u32, u32, u32, u32);\n\n"
                "void func_%08X(u32 a, u32 b, u32 c, u32 d) {\n"
                "    func_%s(a, b, c, d);\n"
                "}\n" % (tgt, addr, tgt))
    if cls in ("stores", "call+stores"):
        lines = skeleton_from_stores(addr, ins)
        head = ""
        if cls == "call+stores":
            t = [o for m, o in ins if m == "CALL"][0].split()[1]
            head = "extern void func_%s(void*);\n\n" % t
            lines = ["    func_%s(self);" % t] + lines
        return (head +
                "void func_%08X(void* self, u32 p1, u32 p2, u32 p3) {\n"
                % addr + "\n".join(lines) + "\n}\n")
    return None


def sweep_spec(addr, cls):
    return f'''"""Auto-generated sweep spec for 0x{addr:08X} (class {cls})."""
TEMPLATE = """// skeleton from synth
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;
extern void helper(void*);
{__import__("open").read(__file__)}
"""
'''


# ------------------------------------------------------------------- main

def check_negative(ins):
    """Hard-skip shapes from the negative recipes (ids mirror
    shared/recipes.json; keep both in sync — these are checked before any
    compile budget is spent)."""
    text = "; ".join(m + " " + o for m, o in ins).lower()
    ms = [m for m, _ in ins]

    def push_r0_lr():
        # neg-armlib-push-r0lr: push {r0,lr} ... pop {r0,pc} — armlib asm
        # idiom; armcc C never emits it (r4 or tail-call in every variant)
        texts = [o for m, o in ins]
        return any(m == "push" and "r0" in o and "lr" in o for m, o in ins) \
            and any(m == "pop" and "r0" in o and "pc" in o for m, o in ins)

    def lr_bulk_data():
        # neg-lr-bulk-data: lr as fill data (mov lr,rX then lr in a stm list)
        for i, (m, o) in enumerate(ins):
            if m == "mov" and re.fullmatch(r"lr, r\d+", o):
                return any(m2.startswith("stm") and "lr" in o2 for m2, o2 in ins[i + 1:])
        return False

    def vfp_wb_dead():
        # neg-vfp-wb-unconditional: vldmia rN! writeback whose pointer is
        # never reused afterwards (00115234: unproducible from C)
        for i, (m, o) in enumerate(ins):
            if m.startswith("vldmia") and "!" in o:
                reg = o.split()[0]
                later = "; ".join(o2 for _, o2 in ins[i + 1:])
                if reg not in later:
                    return True
        return False

    NEG = {
        "neg-svc-stub":      lambda: "svc" in text,
        "neg-mrc-mcr":       lambda: any(m in ("mrc", "mcr") for m, _ in ins),
        "neg-veneer":        lambda: text.startswith("ldr") and "pc, #-4" in text and "pool" in text.split(";", 1)[0],
        "neg-f2uiz-s2":      lambda: "vmov" in text and "vcvt" in text,
        "neg-vfp-wb-unconditional": vfp_wb_dead,
        "neg-guarded-vfp-branch": lambda: (
            len(ins) > 2 and ins[0][0] == "cmp" and ins[1][0].startswith("bx")
            and any(m.startswith("v") for m in ms[2:])),
        "neg-armlib-push-r0lr": push_r0_lr,
        "neg-lr-bulk-data": lr_bulk_data,
    }
    for rid, test in NEG.items():
        if test():
            return rid
    return None


def main():
    addr = int(sys.argv[1], 16) if len(sys.argv) > 1 else None
    as_json = "--json" in sys.argv
    s, e, ins = view(addr)
    neg = check_negative(ins)
    cls = classify(ins)
    res = {
        "addr": "%08X" % addr,
        "size": e - s,
        "class": cls,
        "negative": neg,
        "path": None,
        "spec": None,
    }
    if neg is None and cls:
        os.makedirs(OUT, exist_ok=True)
        src = skeleton(addr, cls, ins)
        if src:
            p = os.path.join(OUT, "func_%08X.c" % addr)
            open(p, "w").write(src)
            res["path"] = p
    if as_json:
        print(json.dumps(res))
    else:
        print("func_%s  %d bytes" % (res["addr"], res["size"]))
        if neg:
            print("DEFER  negative recipe: %s" % neg)
        elif cls:
            print("class:  %s" % cls)
            print("path:   %s" % res["path"])
            print("NEXT    python tools/refine.py 0x%s --budget 60" % res["addr"])
        else:
            print("DEFER  no synthesis class matched (manual review)")
    return res


if __name__ == "__main__":
    main()
