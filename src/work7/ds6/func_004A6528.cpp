#include "ds6.h"

struct A4A6528 { char _pad[0x20]; u32 m20; };
struct B4A6528 { char _pad[8]; u32 m8; u32 mC; };

struct Obj4A6528 {
    char _pad[8];
    A4A6528* mA;
    B4A6528* mB;
};

u32 func_00581850(u32 a, u32 b);
void func_004A6C10(u32 a, u32 b);
void func_004A6568(Obj4A6528* self, u32 a);

void func_004A6528(Obj4A6528* self, u32 a) {
    func_004A6C10(self->mB->mC, func_00581850(self->mA->m20, self->mB->m8));
    func_004A6568(self, a);
}
