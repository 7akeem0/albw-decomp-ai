#include "ds3.h"
void* func_002D55D0(void*, s32);
u32 func_00291F60(char* self, u32 sel) {
    if (*(u32*)(*(u32*)(self + 0x10) + 0x5b0) != 0x3f800000) return 0;
    *(u8*)(self + 0x84) = 0;
    u16* p = (u16*)func_002D55D0(*(void**)(self + 0x48), 0x8e);
    if (p) {
        if (sel == 0) *p = 0x89;
        else if (sel == 1) *p = 0x93;
        else if (sel == 2) *p = 0x94;
    }
    return 1;
}
