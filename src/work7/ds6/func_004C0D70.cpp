#include "ds6.h"

struct Obj4C0D70 {
    char _pad[0x7ac];
    void* m7ac;
    char _pad2[0x7b8 - 0x7b0];
    AnimArr* m7b8;
    char _pad3[0x8ec - 0x7bc];
    u32 m8ec;
    char _pad4[0x917 - 0x8f0];
    u8 m917;
};

void func_004C0D70(Obj4C0D70* self, s32 a) {
    if (!self->m7b8) return;
    if (a == -1) {
        self->m917 = 0;
        return;
    }
    self->m917 = 1;
    func_0016898C(self->m7b8, Req5C(a, self->m8ec, false));
    (*self->m7b8)[0].m10 = 1.0f;
}
