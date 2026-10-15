#include "ds3.h"
struct S26F7 { char pad[8]; s8 s8_8; char g[0x40-9]; u32 m40; f32 x44, y48, z4C; char g2[0x72-0x50]; u8 b72; };
void func_0026F748(S26F7* p, s32 a, u32* b, const Vec3* c) {
    if (p->s8_8 != a) return;
    u32 x=*b; u32 y=p->m40; if (!(y == x)) return;
    p->b72 = 1;
    p->x44 = c->x; p->y48 = c->y; p->z4C = c->z;
}
