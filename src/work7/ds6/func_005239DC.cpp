#include "ds6.h"

struct Obj5239DC {
    char _pad[0x10];
    u32 m10[9];
};

u32 func_005239DC(Obj5239DC* self, u32 i) {
    u32 v = (i < 9) ? self->m10[i] : 0;
    return (u32)((f32)v / 60.0f) / 60;
}

