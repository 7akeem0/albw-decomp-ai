#include "ds4.h"

extern "C" s32 func_003D6914(char* self, char** a1) {
    char* p1 = *a1;
    u32 idx = *(u32*)(self + 0x10);
    u32 end = *(u32*)(self + 0x14) - 1;
    if (idx != end && *(u16*)(*(u32*)(self + 0xc) + 2 + idx * 2) == 0x5e) {
        *(u8*)(p1 + 8) = 3;
        *(u32*)(self + 0x10) = *(u32*)(self + 0x10) + 2;
    } else {
        *(u8*)(p1 + 8) = 2;
        *(u32*)(self + 0x10) = *(u32*)(self + 0x10) + 1;
    }
    *(u32*)(self + 0x18) = *(u32*)(self + 0x18) + 1;
    return 0;
}
