#include "ds2.h"
extern s32 func_00521184(void*);
extern void func_0051D2F4(s32*, s32, f32, s32, s32);
extern void func_0014FAFC(void*, s32, f32);
extern void func_0065A5B8(void*, s32) ;
void func_001A4B68(void* self) {
    char* r5 = (char*)self + 0x800;
    if (*(f32*)(r5 + 0xf0) < 0.04f) *(f32*)(r5 + 0xf0) += 0.001f;
    s32 a = func_00521184(self);
    func_0051D2F4((s32*)((char*)self + 0x3e8), a, 0.05f, 0xb60b60, 0x7fffffff);
    func_0014FAFC(self, *(s32*)((char*)self + 0x3e8), *(f32*)(r5 + 0xf0));
    s32 x = *(s32*)((char*)self + 0x8bc);
    if (x >= 0x3c) func_0065A5B8((char*)self + 0x8bc, 4);
}




