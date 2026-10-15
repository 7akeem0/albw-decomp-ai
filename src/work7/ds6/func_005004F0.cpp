#include "ds6.h"

struct Obj5004F0 {
    char _pad[0x574];
    f32 m574;
    char _pad2[0x930 - 0x578];
    s32 m930;
};

void func_00520FC0();
s32 func_0058AC5C(Obj5004F0* self);
void func_0066B070(void* p, u32 a);

void func_005004F0(Obj5004F0* self) {
    func_00520FC0();
    if (func_0058AC5C(self) >= self->m930) {
        func_0066B070((char*)self + 0x8bc, 1);
    }
    f32 k = 0.1f;
    f32 v = self->m574;
    f32 nv = -v;
    self->m574 = v + nv * k;
}
