#include "ds2.h"

extern s32 func_004F9434(u32);

struct Obj1A3260 {
    char pad0[0x430];
    u32 m430;
    u32 m434;
    char pad438[0x4B5 - 0x438];
    u8 m4B5;
    char pad4b6[0x984 - 0x4b6];
    u32 m984;
    u32 m988;
};

f32 func_001A3260(Obj1A3260* self, void* a) {
    u32 x = self->m4B5 == 0 ? self->m430 : self->m434;
    s32 r = func_004F9434(x);
    f32 res = 0.0f;
    if (r != 5) {
        u32 p = self->m984;
        u32 q = self->m988;
        if (q > p) res = (*(u8*)((char*)a + 0x21) == 7) ? 3.0f : 1.0f;
    }
    return res;
}

