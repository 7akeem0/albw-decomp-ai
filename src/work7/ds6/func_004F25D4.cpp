#include "ds6.h"

struct Obj4F25D4 {
    char _pad[0x3e0];
    f32 m3e0;
    char _pad2[0x4f0 - 0x3e4];
    f32 m4f0;
    char _pad3[0x914 - 0x4f4];
    f32 m914;
    char _pad4[0x91b - 0x918];
    u8 m91b;
};

void func_004F3158(void* self, u32 a);

void func_004F25D4(Obj4F25D4* self, u32 a) {
    if (a != 3) func_004F3158(self, a);
    self->m91b = 0;
    self->m3e0 = 0.0f;
    self->m914 = 0.0f;
    self->m4f0 = 1.0f;
}

