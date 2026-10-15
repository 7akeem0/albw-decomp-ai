#include "ds2.h"

extern f32 func_0051CF68(void*, f32, f32, f32);
extern u32 func_0052F654(void*);
extern bool func_0058A8F0(void*);
extern void func_00657FA0(void*, u32) ;

struct Sub56FA { f32 m0, m4, m8, mC, m10; };
struct Obj156FA0 {
    char pad0[0x3e8];
    u32 m3E8;
    char pad3ec[0xa24 - 0x3ec];
    void* mA24;
    char padA28[4];
    u32 mA2C;
};

void func_00156FA0(Obj156FA0* self) {
    Sub56FA* r4 = (Sub56FA*)self->mA24;
    r4->m10 = func_0051CF68(&r4->mC, r4->m0, r4->m4, r4->m8);
    self->m3E8 = func_0052F654(self->mA24);
    if (func_0058A8F0(self)) func_00657FA0((char*)self + 0x8bc, self->mA2C);
}


