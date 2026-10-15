#include "ds2.h"
struct Vec3 { f32 x, y, z; };
struct A68 { Vec3 v; f32 mC; f32 m10; };
f32 func_0051CF68(void*, f32, f32, f32);
u32 func_0052F654(void*);
u32 func_0058A8F0(void*);
 void func_0065E9FC(void*, u32);

struct ThisE7 {
    char pad0[0x3e8];
    u32 m3e8;
    char pad1[0xa68 - 0x3ec];
    A68* mA68;
    char pad2[0xa7c - 0xa6c];
    u8 m_a7c[1];
};

void func_0022E7E0(ThisE7* t) {
    A68* p = t->mA68;
    p->m10 = func_0051CF68(&p->mC, p->v.x, p->v.y, p->v.z);
    t->m3e8 = func_0052F654(t->mA68);
    if (t->mA68->mC == 1.0f && func_0058A8F0(t)) {
        func_0065E9FC(t->m_a7c, 5);
    }
}
