#include "ds3.h"
struct S2A4A { char pad[0xb60]; u32 mB60; };
extern "C" void func_002A45FC(S2A4A*, s32);
extern "C" void func_002A27C4(S2A4A*, s32);
extern "C" void func_004FABDC(S2A4A*, s32, s32, s32);
void func_002A4AAC(S2A4A* p) {
    func_002A45FC(p, 0);
    p->mB60 = 0;
    func_002A27C4(p, 0);
    func_004FABDC(p, 4, -1, 0);
}
