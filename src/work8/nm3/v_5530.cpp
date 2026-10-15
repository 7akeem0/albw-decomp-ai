#include "range.h"

// 0x553058
struct X553 { char pad[0x15c]; f32 m15C; char pad2[0x324-0x160]; u8 m324; };
f32 f553058(X553* o) {
    f32 v;
    u8 f = o->m324;
    if ((f & 1) && (!(f & 2) || (f & 4))) v = 1.0f;
    else v = o->m15C;
    return v * 0.025f;
}

// 0x55C470
struct E55C2 { char pad[0x34]; u32 a, b, c; char pad2[76 - 0x40]; };
struct B55C2 { char pad[0x1458]; E55C2 items[6]; };
struct O55C2 { char pad[0xc]; s32 mC; u32 m10, m14, m18; };
void f55C470b(O55C2* o, B55C2* b) {
    s32 i = o->mC;
    if ((u32)i >= 6) return;
    E55C2* e = &b->items[i];
    e->a = o->m10;
    e->b = o->m14;
    e->c = o->m18;
}

