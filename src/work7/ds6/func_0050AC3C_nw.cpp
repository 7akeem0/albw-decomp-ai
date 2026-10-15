#include "ds6.h"

 void func_0066B580(void* p, u32 v);

struct Obj50AC3C {
    char _pad[0x418];
    s32 m418;
    char _pad2[0x460 - 0x41c];
    s32 m460;
    char _pad3[0x466 - 0x464];
    u8 m466;
};

void func_0050AC3C(Obj50AC3C* self) {
    if (self->m466) return;
    if (self->m418 > self->m460) func_0066B580(&self->m418, 1);
}
