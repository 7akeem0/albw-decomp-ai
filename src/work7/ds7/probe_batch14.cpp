#include "range.h"

// 0x582178
extern u8* data_00709DF8;
u32 func_0052A378(u32, u32, void*, u32);
u32 f582178(u8* o, u32 a1, u32 a2) {
    u8* g = data_00709DF8;
    if (g[0x61]) return 0;
    return func_0052A378(*(u32*)(o + 0x40), a1, g + 0x18, a2);
}

// 0x5819C8
struct P5819 { char pad[0x18]; u16 m18; };
struct Q5819 { char pad[0x41]; u8 m41; };
struct X5819 { char pad[4]; void* m4; P5819* m8; char pad2[0x10-0xc]; u8 m10; };
s32 f5819C8(X5819* o) {
    u8 m = o->m10;
    if (m == 1) return ((Q5819*)o->m4)->m41 != 0;
    if (m == 2 || m == 3) return (o->m8->m18 & 4) >> 2;
    return 0;
}

// 0x58D200
struct Vec3 { f32 x, y, z; void setSub(const Vec3& a, const Vec3& b); };
struct G58D { char pad[0x1c]; Vec3 m1c; };
extern G58D* data_0070FB60;
struct X58D200 { char pad[0x3d0]; Vec3 m3d0; char pad2[0x548-0x3dc]; u8 m548; };
s32 f58D200(X58D200* o) {
    if (o->m548) return 0;
    Vec3 d;
    d.setSub(o->m3d0, data_0070FB60->m1c);
    return 0x1b;
}
