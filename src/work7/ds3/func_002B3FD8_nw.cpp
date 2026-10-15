#include "ds3.h"
struct Pair2B3F { u32 cur, max; };
struct S2B3F { char pad[0x8ec]; char c8ec[0x48]; Pair2B3F pair; char g[0x988-0x93c]; u8 b988; u8 b989; };
extern "C"  void func_00662638(void*, s32);
void func_002B3FD8(S2B3F* p) {
    Pair2B3F t = p->pair;
    if (t.cur < t.max) p->pair.cur = t.cur + 1;
    else p->b989 = 0;
    if (p->b988) return;
    func_00662638(p->c8ec, 0);
}
