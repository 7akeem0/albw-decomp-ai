#include "ds2.h"

extern s32 func_001E4A5C(void*, u32, void*);
extern void func_004AF3C4(void*, int);

u32 func_001CE8E0(void* self, u32 a, f32* p) {
    if (!func_001E4A5C(self, a, p)) return 0;
    f32 d = p[0] * p[0] + p[2] * p[2];
    if (d > 0.01f) *(f32*)((char*)self + 0x3e0) = 0.22f;
    *(f32*)((char*)self + 0x584) = *(f32*)((char*)self + 0x3d4) + -0.28f;
    func_004AF3C4(self, 2);
    return 1;
}
