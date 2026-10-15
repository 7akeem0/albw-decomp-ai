#include "ds2.h"

extern void func_004F8964(f32*, bool, f32);
extern  void func_00658748(void*, int);

struct Obj1651B0 {
    char pad0[0x3d4];
    f32 m3D4;
    char pad3d8[0x3e0 - 0x3d8];
    f32 m3E0;
};

void func_001651B0(Obj1651B0* self) {
    func_004F8964(&self->m3E0, true, -0.01f);
    f32 lo = 10.4f;
    if (self->m3D4 < lo) return;
    self->m3E0 = 0.0f;
    func_00658748((char*)self + 0x8bc, 2);
}

