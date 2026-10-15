#include "ds2.h"
extern void func_004C0508(void*, u32);
extern void func_001E6AB4(void*, u32);
void func_001CC3E0(void* self, u32 a) {
    if (*(u8*)((char*)self + 0x990) == 0xa) func_004C0508(self, a);
    else func_001E6AB4(self, a);
}
