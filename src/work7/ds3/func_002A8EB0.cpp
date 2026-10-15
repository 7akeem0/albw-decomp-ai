#include "ds3.h"
struct S2A8E { char pad[0x8f0]; u32 m8F0; char g[0x90c-0x8f4]; u8 b90C; };
extern "C" void func_004FC07C(S2A8E*, s32, s32, s32);
extern "C" void func_004FB4C4(S2A8E*, f32);
extern "C" void func_004FACD4(S2A8E*, s32);
void func_002A8EB0(S2A8E* p) {
    p->m8F0 = 0x40000000;
    func_004FC07C(p, 1, -1, 0);
    p->b90C = 0;
    func_004FB4C4(p, 1.0f);
    func_004FACD4(p, 0);
}
