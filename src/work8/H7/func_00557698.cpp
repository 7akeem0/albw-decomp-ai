#include "h7.h"

struct Elem00557698 {
    char _0[0x120];
    u8 m120[0x20];
    char _140[2];
    s8 m142;
    char _143[0x148 - 0x143];
};
struct Self00557698 {
    char _0[0xa4];
    s32 ma4;
    Elem00557698* ma8;
};

u8 func_00557698(Self00557698* self, s32 idx) {
    if (idx < 0 || self->ma4 <= idx) return 0x20;
    Elem00557698* e = ((u32)idx < (u32)self->ma4) ? &self->ma8[idx] : self->ma8;
    s8 k = e->m142;
    if (k == -1) return 0x20;
    u8* p = e->m120;
    if ((u32)k < 0x20) p += k;
    return *p;
}
