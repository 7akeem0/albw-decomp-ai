#include "ds2.h"
extern void func_001C52B0(void*, int, int);
extern void func_001C51C8(void*, int, int);
extern u8 ro_006A69B8[];
extern void* data_007142C8;
extern void func_0051ABC8(void*, u32);
void func_001C5398(void* self) {
    if (*(u8*)((char*)self + 0x7e0) != 4) func_001C52B0(self, 1, 0);
    func_001C51C8(self, 1, 0);
    *(u8*)((char*)self + 0x7e2) = 0;
    func_0051ABC8(data_007142C8, (u32)*(u8*)ro_006A69B8);
}
