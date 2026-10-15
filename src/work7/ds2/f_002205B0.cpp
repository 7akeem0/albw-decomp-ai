#include "ds2.h"

extern void func_004FC07C(void*, int, int, int);

struct Obj2205B0 {
    char pad0[0x8c5];
    u8 m8C5;
    char pad8c6[0x8e4 - 0x8c6];
    u8 m8E4;
    char pad8e5[0xab4 - 0x8e5];
    u32 mAB4;
};

void func_002205B0(Obj2205B0* self) {
    if (self->m8C5 == 0x17) return;
    if (self->m8E4 == 2) func_004FC07C(self, 0xb, 0, 0);
    else func_004FC07C(self, 0x13, 0, 0);
    self->mAB4 = 0;
}
