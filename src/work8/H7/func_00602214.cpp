#include "h7.h"

struct Out00602214 { u32 m0; u32 m4; u32 m8; u32 mc; };
struct Sub00602214 { char _0[8]; u32 m8; };
struct Self00602214 { char _0[0x30]; u32 m30; Sub00602214* m34; };

void func_00601914(u32 a, u32 b);

void func_00602214(Self00602214* self, Out00602214* o) {
    Sub00602214* s = self->m34;
    s->m8 = (o->m4 + o->m8 - (u32)s - 0x18) >> 3;
    func_00601914(o->m4, o->m8);
    o->mc |= 4;
    o->m8 = self->m30;
    self->m34 = 0;
    self->m30 = 0;
}
