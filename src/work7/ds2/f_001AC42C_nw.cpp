#include "ds2.h"

extern void func_0051D27C(void*, s32, s32);
 extern void func_0065AC0C(void*, int);

struct Obj1AC42C {
    char pad0[0x8f4];
    s32 m8F4;
    char pad8f8[0x938 - 0x8f8];
    u32 m938;
    u32 m93C;
};

void func_001AC42C(Obj1AC42C* self) {
    func_0051D27C((char*)self + 0x3e8, self->m8F4, 0x2222222);
    u32 a = self->m938;
    u32 b = self->m93C;
    if (a < b) {
        a = a + 1;
        self->m938 = a;
    }
    if (a < b) return;
    func_0065AC0C((char*)self + 0x8bc, 6);
}
