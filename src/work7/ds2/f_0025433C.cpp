#include "ds2.h"

extern s32 func_00556E64(void*);
extern void func_0065FE3C(void*, int);
extern void func_0014E2A0(void*, void*, void*, int, int, int);

void func_0025433C(void* self) {
    if (func_00556E64(*(void**)0x70FB60) == 0 && *(u8*)((char*)self + 0x480) != 0)
        func_0065FE3C((char*)self + 0x420, 2);
    *(u8*)((char*)self + 0x480) = 0;
    func_0014E2A0(self, *(void**)((char*)self + 0x45c), (char*)self + 0x460, 0x4000, 0, 0);
}
