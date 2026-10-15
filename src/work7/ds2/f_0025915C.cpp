#include "ds2.h"

extern f32 func_00523958(void*);
extern void func_00258038(void*, void*, void*, f32);

struct Obj25915C {
    char pad0[0x3c];
    u32 m3C;
};

void func_0025915C(Obj25915C* self) {
    if (self->m3C != 0) return;
    f32 v = func_00523958(*(void**)0x70D858);
    if (v < 0.75f) return;
    func_00258038(self, (void*)2, (void*)0x3c, 1.0f);
    self->m3C = self->m3C + 1;
}
