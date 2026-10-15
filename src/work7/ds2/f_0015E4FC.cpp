#include "ds2.h"

extern s32 func_0058AC9C(void*);
extern s32 func_0058ACC8(void*, f32);
extern void func_00588C14(void*, int, int);

struct Obj15E4FC {
    char pad0[0x2e];
    u16 m2E;
};

void func_0015E4FC(Obj15E4FC* self) {
    if (func_0058AC9C(self)) return;
    if (!func_0058ACC8(self, 0.0f)) return;
    if (((u8)self->m2E) == 0) return;
    func_00588C14(self, 1, 1);
}
