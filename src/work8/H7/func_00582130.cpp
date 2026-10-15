#include "h7.h"

struct G00582130 { char _0[0x61]; u8 m61; };
extern G00582130* data_00709DF8;

struct Sub00582130 {
    char _0[0x14];
    u32 m14;
    s32* m18;
};
struct Obj00582130 {
    char _0[0x40];
    Sub00582130* m40;
};

s32 func_00582130(Obj00582130* self, u32 idx) {
    if (data_00709DF8->m61 != 0) return 0;
    Sub00582130* s = self->m40;
    if (s->m18 == 0) return -1;
    s32* base = s->m18;
    s32* e = base;
    if (s->m14 > idx) e = &base[idx];
    s32 v = *e;
    return (s16)v;
}
