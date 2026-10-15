#include "ds2.h"
extern s32 func_0058AC5C(void*);
extern s32 func_005211BC(void*, f32, f32);
extern s32 func_00521060(void*);
extern void func_0065E630(void*, int) ;
void func_002238F8(void* self) {
    if (func_0058AC5C(self) >= *(s32*)((char*)self + 0x920)) {
        if (func_005211BC(self, 8.0f, 0.0f) == 0) { func_0065E630((char*)self + 0x8bc, 0); return; }
        if (func_00521060(self) == 0) { func_0065E630((char*)self + 0x8bc, 0); return; }
        func_0065E630((char*)self + 0x8bc, 1);
        *(u32*)((char*)self + 0x920) = 2;
    }
}
