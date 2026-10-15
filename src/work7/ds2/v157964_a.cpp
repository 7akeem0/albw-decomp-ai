#include "ds2.h"
extern f32 func_0058AA40(void*);
extern f32 func_0058AC38(void*);
extern void func_004FABDC(void*, int, int, int);
extern void func_004FB0A4(void*, f32);
void func_00157964(void* self) {
    char* p = *(char**)((char*)self + 0x420);
    u8 z = 0;
    *(u8*)(p + 0x22) = z;
    *(f32*)((char*)self + 0x3dc) = 0.0f;
    *(f32*)((char*)self + 0x3e4) = 0.0f;
    f32 v = func_0058AA40(self);
    if (v <= 1.0f) v = func_0058AC38(self);
    else v = func_0058AA40(self);
    if (*(u8*)((char*)self + 0x8c1) == 9) v = func_0058AC38(self);
    if (*(u32*)((char*)self + 0x3e8) < 0x80000000u) func_004FABDC(self, 9, 1, 0);
    else func_004FABDC(self, 6, 1, 0);
    func_004FB0A4(self, v + 1.0f);
}
