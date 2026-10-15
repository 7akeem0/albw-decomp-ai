#include "ds6.h"

struct Obj5210AC {
    char _pad[0x54];
    s16 m54;
};

extern void* data_0070C8E0;
s32 func_00581D48(void* p, void* q);

bool func_005210AC(Obj5210AC* self, s32* out) {
    if (self->m54 < 0) return true;
    s32 r = func_00581D48(data_0070C8E0, (char*)self + 0x3d0);
    if (r < 0) return true;
    if (out) *out = r;
    if (self->m54 != r) return false;
    return true;
}

