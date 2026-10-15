#include "ds6.h"

struct Obj5228A4 {
    char _pad[0x18];
    s32 m18;
    char _pad2[0x20 - 0x1c];
    void** m20;
    void* at(s32 i) { if ((u32)i < (u32)m18) return m20[i]; return 0; }
};

bool func_005228A4(Obj5228A4* self, void* v) {
    if (self->m18 == 0 || v == 0) return false;
    return self->at(self->m18 - 1) == v;
}
