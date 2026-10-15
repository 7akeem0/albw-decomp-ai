#include "ds2.h"
void func_004BFF60(void*, u32, u32, u32, f32, u32, u32, void*);

struct Sub18 {
    char pad0[0x52];
    u8 m52;
    char pad1[0x5c - 0x53];
    s8 m5c;
    char pad2[0xb4 - 0x5d];
    f32 mB4;
    f32 mB8;
};
struct This18 {
    char pad0[0x3e8];
    u32 m3e8;
    char pad1[0x800 - 0x3ec];
    Sub18 sub;
    char pad3[0x9c4 - (0x800 + 0xbc)];
    u16 m9c4;
};

void func_001847A8(This18* t) {
    u32* vt = *(u32**)t;
    ((void (*)(void*, u32, s32))vt[43])(t, 3, -1);
    f32 v = (t->sub.m52 == t->sub.m5c) ? t->sub.mB8 : t->sub.mB4;
    func_004BFF60(t, 0, 0, 0, v, 0, t->m3e8, (void*)((char*)t + 0x3d0));
    t->m9c4 = 200;
}
