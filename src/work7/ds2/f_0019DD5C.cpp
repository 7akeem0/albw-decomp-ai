#include "ds2.h"
struct Vec3 { f32 x, y, z; };
Vec3* func_00520FC0(void*);
u32 func_0068C794(f32*, f32, f32, f32, f32);
void func_0065A1EC(void*, u32);
struct This19DD {
    char pad0[0x3d4];
    f32 m3d4;
    char pad1[0x3e0 - 0x3d8];
    f32 m3e0;
    char pad2[0x8bc - 0x3e4];
    char m8bc[1];
};

void func_0019DD5C(This19DD* t) {
    f32 v = t->m3d4;
    t->m3e0 = 0.0f;
    u32 c = func_0068C794(&v, func_00520FC0(t)->y + 5.0f, 0.1f, 0.3f, 0.3f);
    t->m3e0 = v - t->m3d4;
    if (c) func_0065A1EC((char*)t + 0x8bc, 1);
}
