#include "ds2.h"
extern s32 func_00520EE4(void*);
extern s32 func_00520ED8(void*);
extern void func_00520FF8(void*);
extern void func_0065FE3C(void*, s32) ;
void func_002542D8(void* self) {
    if (!(*(f32*)((char*)self + 0x3d4) > *(f32*)((char*)self + 0xc))) {
        if (func_00520EE4(self) != 0) { func_0065FE3C((char*)self + 0x420, 8); return; }
    }
    if (func_00520ED8(self) != 0) {
        func_00520FF8(self);
        func_0065FE3C((char*)self + 0x420, 1);
    }
}

