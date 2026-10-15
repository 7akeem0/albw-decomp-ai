#include "ds2.h"
extern s32 func_00521184(void*);
extern void func_0051D27C(s32*, s32, u32);
extern u32 data_0070A804;
extern void func_00115154(f32*, f32*, u32);
extern f32 func_00521298(void*);
extern void func_0065A474(void*, s32) ;
void func_001A36F0(void* self) {
    s32 a = func_00521184(self);
    func_0051D27C((s32*)((char*)self + 0x3e8), a, data_0070A804);
    f32 cosv = 0.0f;
    f32 sinv = 0.0f;
    func_00115154(&sinv, &cosv, *(u32*)((char*)self + 0x3e8));
    *(f32*)((char*)self + 0x3dc) = sinv * 0.05f;
    *(f32*)((char*)self + 0x3e4) = cosv * 0.05f;
    u64 v = *(u64*)((char*)self + 0x96c);
    u32 x = (u32)v;
    u32 y = (u32)(v >> 32);
    if (x < y) { *(u32*)((char*)self + 0x96c) = x + 1; return; }
    if (func_00521298(self) >= 1.0f) func_0065A474((char*)self + 0x8bc, 3);
}
