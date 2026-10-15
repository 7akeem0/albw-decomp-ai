#include "ds2.h"

extern void func_0024ADF4(void*, int, f32, f32);
extern void func_004CF478(void*, u32, u32);
extern void func_00151148(void*, u32);

struct Obj24AC3C {
    char pad0[0x3d4];
    f32 m3D4;
    char pad3d8[0x40c - 0x3d8];
    void* m40C;
    char pad410[0x418 - 0x410];
    void* m418;
    char pad41c[0x444 - 0x41c];
    u32 m444;
};

void func_0024AC3C(Obj24AC3C* self) {
    func_0024ADF4(self, 3, 0.0f, 1.0f);
    self->m444 = 0;
    self->m3D4 += 4.0f;
    func_004CF478(self->m40C, 0, 0);
    func_00151148(self->m418, 0);
}
