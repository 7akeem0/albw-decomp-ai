#include "ds6.h"

struct Obj51E300 {
    char _pad[0xd];
    s8 m0d;
    s8 m0e;
    char _pad2[0x18 - 0xf];
    u32 m18;
};

u32 func_0051E300(Obj51E300* self) {
    if (self->m18 & 1) return 1;
    s8 a = self->m0e;
    if (a == 1) return 1;
    s8 b = self->m0d;
    if (b == 1 || a == 4) return 1;
    if (b == 4) return 1;
    return 0;
}
