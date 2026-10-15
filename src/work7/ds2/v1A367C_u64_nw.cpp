#include "ds2.h"
extern s32 func_00521100(void*, f32);
extern f32 func_00521298(void*);
extern void func_0065A474(void*, s32) ;
void func_001A367C(void* self) {
    u64 v = *(u64*)((char*)self + 0x978);
    u32 a = (u32)v;
    u32 b = (u32)(v >> 32);
    if (a < b) { *(u32*)((char*)self + 0x978) = a + 1; return; }
    u32 r5 = (u32)func_00521100(self, 0.0f);
    f32 vv = func_00521298(self);
    bool c = vv < 25.0f;
    if (!(c & r5)) return;
    func_0065A474((char*)self + 0x8bc, 1);
}
