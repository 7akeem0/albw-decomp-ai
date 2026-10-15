#include "ds4.h"
extern u8* data_007142C8;
extern "C" __attribute__((weak)) void func_00668E44(void*, u32);

void func_003A9FB0(u8* self) {
    u8* m = data_007142C8;
    u8* s = *(u8**)(*(u8**)(m + 0x12c) + 0x24);
    if (*(s32*)(self + 0x210) <= 0xf0) return;
    if (s[0xd] != 3) return;
    if (s[0xe] != 3) return;
    func_00668E44(self + 0x210, 3);
}

