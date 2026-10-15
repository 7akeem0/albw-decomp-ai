#include "h7.h"

struct Handle00584150 { u32 m0; u32 m4; };
struct Sub00584150 { char _0[0xd6]; u8 md6; u8 md7; };
struct Actor00584150 { char _0[0x200]; Sub00584150 m200; };
struct Self00584150 { char _0[0x3dbbc]; };

Actor00584150* func_0052FBA0(void* mgr, u32 handle);

u32 func_00584150(Self00584150* self, Handle00584150* h) {
    if (h == 0 || h->m0 == 0) return 1;
    Actor00584150* a = func_0052FBA0((char*)self + 0x3dbbc, h->m4);
    if (a != 0) {
        Sub00584150* s = &a->m200;
        if (s->md7 == 0 && s->md6 != 0) return 1;
    }
    return 0;
}
