#include "ds3.h"
struct Pair2B3 { u32 cur, max; };
struct S2B3C { char pad[0x8ec]; char c8ec[0x48]; Pair2B3 pair; char g[0x988-0x93c]; u8 b988; };
extern "C"  void func_00662638(void*, s32);
void func_002B3C48(S2B3C* p) {
    if (!p->b988) return;
    Pair2B3 t = p->pair;
    if (t.max > t.cur) { p->pair.cur = t.cur + 1; return; }
    func_00662638(p->c8ec, 3);
}
