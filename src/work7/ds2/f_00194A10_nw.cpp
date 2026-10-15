#include "ds2.h"

 extern void func_004CF478(void*, u32, u32);

struct Sub94A10 { char pad[0x44]; u8 m44; };

struct Obj194A10 {
    char pad0[0x484];
    void* m484;
    char pad488[0x48C - 0x488];
    void* m48C;
    char pad490[0x4C0 - 0x490];
    Sub94A10* m4C0;
};

void func_00194A10(Obj194A10* self) {
    if (self->m484) func_004CF478(self->m484, 0, 0);
    if (self->m48C) func_004CF478(self->m48C, 0, 0);
    if (self->m4C0) self->m4C0->m44 = 1;
}
