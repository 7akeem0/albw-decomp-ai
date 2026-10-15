#include "ds2.h"

extern s32 func_00556E7C(void*, int);

u32 func_00172704(void* self) {
    if (*(u8*)((char*)self + 0x2ea) == 0) {
        if (func_00556E7C(*(void**)0x70FB60, 0xa1) != 0) {
            char* g = *(char**)0x709DF8;
            if (g != 0 && *(u8*)(g + 0x18) == 0) *(u8*)((char*)self + 0x2ea) = 1;
        }
    }
    return *(u32*)((char*)(*(char**)0x70B728) + 0x44) == 0 ? 1 : 0;
}
