#include "ds2.h"

extern u8 ro_6A0F30[];
extern void* g_70FB60;
extern s32 func_0036174C(void*, u8, void*);

struct Obj1CD15C {
    char pad0[0x4f9];
    u8 m4F9;
    char pad4fa[0x50c - 0x4fa];
    u8 m50C;
};

void func_001CD15C(Obj1CD15C* self) {
    if (self->m50C == 0) return;
    u8 c = ro_6A0F30[self->m4F9];
    if (func_0036174C(g_70FB60, c, (char*)self + 0x4fc) != 0) self->m50C = 0;
}
