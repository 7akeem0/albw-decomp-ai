#include "ds6.h"

struct Obj4CAD84 {
    char _pad[0x2cc];
    u32 m2cc;
    char _pad2[0x2d7 - 0x2d0];
    u8 m2d7;
    char _pad3[0x8e4 - 0x2d8];
    u8 m8e4;
    char _pad4[0x925 - 0x8e5];
    u8 m925;
};

extern void* data_0070FB60;
u32 func_002925A0(void* p, u32 a, u32 b);

void func_004CAD84(Obj4CAD84* self) {
    if (self->m925 == 0) return;
    u32 k = 6;
    if (self->m8e4 == 1) k = 7;
    if (func_002925A0(data_0070FB60, k, self->m2cc) == 0) return;
    self->m925 = 0;
    self->m2d7 = 1;
}
