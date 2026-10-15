#include "ds3.h"
struct Pair2E21 { u32 cur, max; };
struct S2E21 { char pad[0x34]; Pair2E21 pair; };
extern "C" void func_002E1CA4(S2E21*, s32);
s32 func_002E213C(S2E21* p) {
    Pair2E21 t = p->pair;
    if (t.cur == t.max) { func_002E1CA4(p, 5); return 1; }
    if (t.cur > t.max) { func_002E1CA4(p, 4); return 0; }
    func_002E1CA4(p, 3);
    return 2;
}
