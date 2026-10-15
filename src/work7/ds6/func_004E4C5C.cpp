#include "ds6.h"

struct Obj4E4C5C {
    char _pad[0x3dc];
    Vec3 m3dc;
    char _pad2[0x478 - 0x3e8];
    void* m478;
    char _pad3[0x4cc - 0x47c];
    void* m4cc;
    char _pad4[0x520 - 0x4d0];
    f32 m520;
};

void func_004CF478(void* p, s32 a, s32 b);
void func_00151148(void* p, s32 a);

void func_004E4C5C(Obj4E4C5C* self) {
    func_004CF478(self->m478, 1, 0);
    func_00151148(self->m4cc, 1);
    f32 z = 0.0f;
    self->m520 = z;
    self->m3dc.x = z;
    self->m3dc.y = z;
    self->m3dc.z = z;
}

