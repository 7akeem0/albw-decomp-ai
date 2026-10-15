#include "ds6.h"

struct Obj537D70 {
    char _pad[0xc];
    char mC[0x34];
    u32 m40;
    s32 m44;
    char _pad2[0x64 - 0x48];
    u8 m64;
};

u32 func_0057D86C(void* p);

bool func_00537D70(Obj537D70* self) {
    if (func_0057D86C((char*)self + 0xc) == 0 && self->m40 == 0xFFFFFFFFu) return false;
    if (self->m64 != 0) return false;
    return self->m44 > 0;
}

