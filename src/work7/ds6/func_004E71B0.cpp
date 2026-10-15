#include "ds6.h"

struct Obj4E71B0 {
    char _pad[0x2c];
    u16 m2c;
    char _pad2[0x2cc - 0x2e];
    u32 m2cc;
    char _pad3[0x2d7 - 0x2d0];
    u8 m2d7;
    char _pad4[0x55e - 0x2d8];
    u8 m55e;
};

extern void* data_0070FB60;
u32 func_002925A0(void* p, u32 a, u32 b);
void func_00547514(void* p);

void func_004E71B0(Obj4E71B0* self) {
    if (self->m55e == 0) return;
    if (func_002925A0(data_0070FB60, 5, self->m2cc) == 0) return;
    if (self->m2c == 1) func_00547514((char*)self + 4);
    self->m2d7 = 1;
}
