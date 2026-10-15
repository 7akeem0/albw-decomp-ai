#include "ds2.h"
extern s32 func_004BEB08(void*, u32);
u32 func_001CC250(void* self, u32 a) {
    if (*(u8*)((char*)self + 0x990) != 0xa) return 1;
    return (u32)func_004BEB08(self, a);
}
