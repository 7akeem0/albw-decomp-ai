#include "ds3.h"
struct Pair2FC4 { u32 cur, max; };
struct S2FC4 { char pad[0x8bc]; char c8bc[0x3c]; Pair2FC4 pair; };
extern "C" void func_0058AC38(S2FC4*);
extern "C" bool func_0058ACC8(S2FC4*);
extern "C"  void func_006644B8(void*, s32);
void func_002FC480(S2FC4* p) {
    func_0058AC38(p);
    if (!func_0058ACC8(p)) return;
    Pair2FC4 t = p->pair;
    if (t.max > t.cur) { p->pair.cur = t.cur + 1; return; }
    func_006644B8(p->c8bc, 4);
}
