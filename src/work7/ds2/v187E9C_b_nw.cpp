#include "ds2.h"
extern void func_00659544(void*, int) ;
static __forceinline f32 clampF(f32 v, f32 lo, f32 hi) {
    if (v < lo) v = lo;
    else if (v > hi) v = hi;
    return v;
}
void func_00187E9C(void* self) {
    s32 a = *(s32*)((char*)self + 0x4fc);
    s32 b = *(s32*)((char*)self + 0x6ec);
    f32 v = clampF((f32)a / (f32)b, 0.01f, 1.0f);
    *(f32*)((char*)self + 0x568) = v;
    if (a < b) return;
    *(f32*)((char*)self + 0x568) = 1.0f;
    func_00659544((char*)self + 0x4fc, 0);
}

