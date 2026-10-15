#include "ds3.h"
struct S29D164 { char pad[0xe0]; u8 mE0[0x10]; u8 bF0; char pad2[0x144-0xf1]; u8 b144; };
extern "C" void* data_00709DF8;
extern "C" int func_004EF418(void*, void*, int, int);
void func_0029D164(S29D164* self) {
    if (self->bF0 >= 4) { self->b144 = 0; return; }
    if (self->b144 == 0) return;
    if (func_004EF418(data_00709DF8, self->mE0, 0xc, 0) != 0) self->b144 = 0;
}
