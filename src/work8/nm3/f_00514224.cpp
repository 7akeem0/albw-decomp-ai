#include "ds6.h"

struct Sub400_514224 { char _pad[0x90]; s8 m90; char _pad2[0xc8 - 0x91]; s8 mc8; };
struct Obj514224 {
    char _pad[0x400];
    Sub400_514224 m400;
};

extern void* data_0070FB60;
u32 func_0036174C(void* p, u32 a, void* b);

void func_00514224(Obj514224* self) {
    if (self->m400.mc8 == 0) return;
    if (self->m400.m90 != 9) return;
    if (func_0036174C(data_0070FB60, 0x32, (char*)self + 0x504) != 0) self->m400.mc8 = 0;
}
