#include "ds6.h"

void func_0066B1B4(void* p, u32 v);

struct S500E24 { u8 m0; u8 m1; };
struct Arg500E24 { char _pad[0x2c]; S500E24* m2c; };
struct Obj500E24 {
    char _pad[0x8bc];
    char tail;
    char _pad2[0x8c0 - 0x8bd];
    u8 m8c0;
};

u32 func_00500E24(Obj500E24* self, Arg500E24* arg) {
    if (arg->m2c->m1 != 0x11) return 0;
    if (self->m8c0 == 0) func_0066B1B4((char*)self + 0x8bc, 1);
    return 1;
}
