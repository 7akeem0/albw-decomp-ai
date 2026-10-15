#include "ds6.h"

struct Obj523A1C {
    char _pad[0x10];
    u32 m10[9];
};

u32 func_00523A1C(Obj523A1C* self, u32 i) {
    u32 v = (i < 9) ? self->m10[i] : 0;
    u32 t = (u32)((f32)v / 60.0f);
    return t % 60;
}

