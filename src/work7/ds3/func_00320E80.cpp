#include "ds3.h"
struct Interp320 { char b[0x18]; };
struct S320E { char pad[0x1c]; u32 m1C; char g[0x16c-0x20]; u32 m16C; u32 gap174; Interp320** m174; };
extern "C" void func_0010C7F8(Interp320*, s32, f32);
void func_00320E80(S320E* p, u32 idx, s32 frames, f32 target) {
    if (idx < 0x4000000) return;
    if (p->m1C + 0x4000000 <= idx) return;
    u32 i = idx - 0x4000000;
    Interp320* it = (p->m16C > i) ? p->m174[i] : 0;
    func_0010C7F8(it, frames, target);
}
