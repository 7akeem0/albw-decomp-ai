#include "ds6.h"

struct Obj53A900 {
    char _pad[0xb28];
    s32 mB28;
    char _pad2[0xb94 - 0xb2c];
    s32 mB94;
    char _pad3[0xba0 - 0xb98];
    s32 mBA0;
};

u32 func_0035B0A8();
u32 func_0035AD7C();

bool func_0053A900(Obj53A900* self) {
    if (self->mB94 >= 2) return true;
    if (func_0035B0A8() != 0) return true;
    if (self->mB28 > 0) return false;
    return self->mBA0 >= 0x18 && func_0035AD7C() != 0;
}
