# Ghidra headless postScript (Jython 2.7): dump pseudocode for unindexed functions.
# Usage:
#   analyzeHeadless <proj> ALBW -import code.bin -processor ARM:LE:32:v7 \
#     -loader BinaryLoader -loader-baseAddr 0x100000 -noanalysis \
#     -postScript ghidra_dump.py <outdir> <funcs.json> <functions.json>
# Functions are created from the funcs.json starts (no auto-analysis), then
# each is decompiled once through the persistent decompiler process.
import json, os

args = list(getScriptArgs())
out_dir = os.path.abspath(args[0])
starts = json.load(open(args[1]))["starts"]
indexed = set(json.load(open(args[2])))
if not os.path.isdir(out_dir):
    os.makedirs(out_dir)

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

ifc = DecompInterface()
ifc.openProgram(currentProgram)
fm = currentProgram.getFunctionManager()
mon = ConsoleTaskMonitor()

todo = [a for a in starts if ("%08X" % a) not in indexed]
print("ghidra_dump: %d unindexed functions" % len(todo))

done = failed = 0
for a in todo:
    addr = toAddr(a)
    f = fm.getFunctionAt(addr)
    if f is None:
        if createFunction(addr, "func_%08X" % a) is None:
            failed += 1
            continue
        f = fm.getFunctionAt(addr)
    if f is None:
        failed += 1
        continue
    res = ifc.decompileFunction(f, 30, mon)
    if res.decompileCompleted():
        src = res.getDecompiledFunction().getC()
    else:
        src = "// decompile failed: %s\n" % res.getErrorMessage()
    with open(os.path.join(out_dir, "func_%08X.c" % a), "w") as fh:
        fh.write(src)
    done += 1
    if done % 200 == 0:
        print("ghidra_dump: %d/%d" % (done, len(todo)))

print("ghidra_dump: done=%d failed=%d" % (done, failed))
