#include "ds6.h"

struct Obj4C0600 {
    char _pad[0x7ac];
    AnimArr* m7ac;
    char _pad2[0x852 - 0x7b0];
    u8 m852;
    char _pad3[0x8b0 - 0x853];
    u8 m8b0;
    char _pad4[0x8ec - 0x8b1];
    u32 m8ec;
};

bool func_004C0600(Obj4C0600* self, s32 a) {
    if (a < 0 || a == self->m852 || a >= self->m8b0) return false;
    self->m852 = (u8)a;
    func_0016898C(self->m7ac, Req5C(a, self->m8ec, false));
    (*self->m7ac)[0].m10 = 1.0f;
    return true;
}
