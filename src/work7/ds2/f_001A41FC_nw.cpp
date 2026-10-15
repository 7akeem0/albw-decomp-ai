#include "ds2.h"

extern void func_0014FAFC(void*, s32);
extern bool func_0058A8F0(void*);
 extern void func_0065A5B8(void*, int);

struct Obj1A41FC {
    char pad0[0x3e8];
    u32 m3E8;
    char pad3ec[0x8f0 - 0x3ec];
    f32 m8F0;
};

void func_001A41FC(Obj1A41FC* self) {
    self->m8F0 *= 0.9f;
    func_0014FAFC(self, self->m3E8);
    if (func_0058A8F0(self)) func_0065A5B8((char*)self + 0x8bc, 2);
}
