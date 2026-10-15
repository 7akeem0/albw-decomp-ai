#include "ds2.h"

extern void* func_00520FC0(void*);
extern void func_001B55BC(void*, const void*, u32, f32);
extern bool func_0058A8F0(void*);
extern void func_0065B29C(void*, int);

struct Vec3_4EF4 { f32 x, y, z; };

void func_001B4EF4(void* self) {
    Vec3_4EF4 p = *(Vec3_4EF4*)func_00520FC0(self);
    func_001B55BC(self, &p, 0x2222222, *(f32*)((char*)self + 0x950));
    if (func_0058A8F0(self)) func_0065B29C((char*)self + 0x8bc, 3);
}
