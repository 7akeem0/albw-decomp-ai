#include "ds3.h"
u32 func_00588BF0(void*, u32);
void func_0014E2A0(void*, u32, void*, u32, u32, u32);
void func_0029F8FC(char* self) {
    if (func_00588BF0(self, 1) == 0) return;
    *(u8*)(self + 0x423) = 0;
    func_0014E2A0(self, *(u32*)(self + 0x40c), self + 0x410, 0x100, 0, 0);
}
