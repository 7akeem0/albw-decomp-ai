#include "ds6.h"

struct Obj4DB94C {
    char _pad[0x3d0];
    Vec3 m3d0;
    char _pad2[0x834 - 0x3dc];
    f32 m834;
    char _pad3[0x99c - 0x838];
    char m99c[1];
    char _pad4[0x9bd - 0x99d];
    u8 m9bd;
};

void func_004C1418(Obj4DB94C* self, u32 a);
void func_004BDA28(Obj4DB94C* self);
void func_004C01E4(Obj4DB94C* self);
u32 func_0068A4B4(Vec3* a, void* b, f32 c);

void func_004DB94C(Obj4DB94C* self) {
    func_004C1418(self, 1);
    func_004BDA28(self);
    func_004C01E4(self);
    if (func_0068A4B4(&self->m3d0, (char*)self + 0x99c, self->m834) != 0) self->m9bd = 0;
}

