#include "ds2.h"
static __forceinline f32 clampF(f32 v, f32 lo, f32 hi) {
    if (v < lo) v = lo;
    else if (v > hi) v = hi;
    return v;
}
void func_001CB798(void* self, f32 v) {
    v = clampF(v, 0.01f, 1.0f);
    v = v * 1.15f;
    *(f32*)((char*)self + 0x830) = v;
    char* p = *(char**)((char*)self + 0x7a0);
    u32 f = *(u32*)(p + 0x164);
    f |= 0x40000000u;
    *(u32*)(p + 0x164) = f;
    *(f32*)(p + 0x74) = v;
    *(f32*)(p + 0x78) = v;
    *(f32*)(p + 0x7c) = v;
}
