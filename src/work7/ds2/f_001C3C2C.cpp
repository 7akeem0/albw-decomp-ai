#include "ds2.h"
extern s32 func_00588BE4(void*);
extern u32 ro_006934B8;
extern void func_003A53B0(void*, int);
extern void func_001E6CE8(void*);
void func_001C3C2C(void* self) {
    char* r5 = (char*)self + 0x5fc;
    if (*(u8*)((char*)self + 0x851) != 0) {
        if ((u32)func_00588BE4(self) == ro_006934B8)
            func_003A53B0(r5, 0x16);
        else
            func_003A53B0(r5, 7);
    } else {
        func_003A53B0(r5, 0);
    }
    func_001E6CE8(self);
}
