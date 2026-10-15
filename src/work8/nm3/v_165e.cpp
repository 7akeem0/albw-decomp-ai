#include "ds2.h"

struct Obj165E28 {
    char pad0[0xb2];
    u16 mB2;
    char padB4[0xec - 0xb4];
    u16 mEC;
    char padEE[0xf8 - 0xee];
    u8 mF8;
    u8 mF9;
    u8 mFA;
};

u32 func_00165E28(Obj165E28* self, u16 h) {
    self->mEC = h;
    void* p = *(void**)0x70B728;
    if (p) p = *(void**)((char*)p + 0x44);
    if (p != 0 && p == self) {
        self->mF8 = 1;
        self->mFA = 0;
        self->mF9 = 1;
        self->mB2 = h;
        return 1;
    }
    return 0;
}
