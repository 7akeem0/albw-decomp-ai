#include "ds2.h"

extern void func_004FABDC(void*, int, int, int);

struct Obj220B78 {
    char pad0[0x8e4];
    u8 m8E4;
    char pad8e5[0xb02 - 0x8e5];
    u8 mB02;
};

void func_00220B78(Obj220B78* self, u32 a, void* c) {
    if (*(u8*)((char*)c + 0x24) != 0x12) return;
    if (self->m8E4 == 2) func_004FABDC(self, 0xd, 0, 0);
    else func_004FABDC(self, 0x11, 0, 0);
    self->mB02 = 1;
}
