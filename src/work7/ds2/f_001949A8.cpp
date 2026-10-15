#include "ds2.h"

extern void func_004CF478(void*, u32, u32);

struct Sub49A8 { char pad[0x44]; u8 m44; };
struct Obj1949A8 {
    char pad0[0x480];
    void* m480;
    void* m484;
    char pad488[0x48C - 0x488];
    void* m48C;
    char pad490[0x4C0 - 0x490];
    Sub49A8* m4C0;
    char pad4c4[0x4CD - 0x4c4];
    u8 m4CD;
};

void func_001949A8(Obj1949A8* self) {
    if (self->m484) func_004CF478(self->m484, 0, 0);
    if (self->m48C) func_004CF478(self->m48C, 0, 0);
    if (self->m480) func_004CF478(self->m480, 0, 0);
    if (self->m4C0) self->m4C0->m44 = 0;
    self->m4CD = 0;
}
