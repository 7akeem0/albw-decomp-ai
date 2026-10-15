#include "ds3.h"
struct S2E61 { char pad[0x3dc]; f32 m3DC; char g[0x3e4-0x3e0]; f32 m3E4; };
extern "C" void func_004FABDC(S2E61*, s32, s32, s32);
extern "C" void func_004FB4E0(S2E61*, f32);
void func_002E616C(S2E61* p) {
    p->m3DC = 0.0f;
    p->m3E4 = 0.0f;
    func_004FABDC(p, 2, -1, 0);
    func_004FB4E0(p, 1.0f);
}
