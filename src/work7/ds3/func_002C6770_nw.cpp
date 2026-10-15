#include "ds3.h"
struct Pair2C67 { u32 cur, max; };
struct S2C67 { char pad[0x47c]; void* m47C; char g[0x4c0-0x480]; char c4c0[0x24]; Pair2C67 pair; };
extern "C" void func_001E410C(S2C67*);
extern "C" void func_004CEAF0(void*);
extern "C"  void func_006631AC(void*, s32);
void func_002C6770(S2C67* p) {
    func_001E410C(p);
    func_004CEAF0(p->m47C);
    Pair2C67 t = p->pair;
    if (t.cur < t.max) { p->pair.cur = t.cur + 1; return; }
    func_006631AC(p->c4c0, 3);
}
