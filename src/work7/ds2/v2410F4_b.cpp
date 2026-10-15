#include "ds2.h"
extern s32 func_0053007C(void*);
extern void func_0065F194(void*, int);
u32 func_002410F4(void* self) {
    char* b = (char*)self + 0x400;
    if (*(u8*)(b + 0xc4) == 1) {
        if (*(f32*)(b + 0x78) != *(f32*)(b + 0x9c) ||
            *(f32*)(b + 0x80) != *(f32*)(b + 0xa4)) {
            if (func_0053007C(self) == 0) {
                func_0065F194((char*)self + 0x4c0, 2);
                return 1;
            }
        }
    }
    return 0;
}
