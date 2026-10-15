#include "ds3.h"
struct S29208C { char pad[0x10]; void* m10; char pad2[0x42-0x14]; s16 m42; char pad3[0x48-0x44]; void* m48; };
extern "C" u8 data_007111A8[];
extern "C" void* func_002D55D0(void*, int);
extern "C" u32 func_0052E7D8(void*, u32);
int func_0029208C(S29208C* self, u32 arg) {
    if ((*(u32*)(data_007111A8 + self->m42 * 16 + 4) & 0x80) == 0) return 0;
    u32* sd = (u32*)func_002D55D0(self->m48, 0x6a);
    if (sd == 0) return 0;
    sd[7] = func_0052E7D8(self->m10, arg);
    return 1;
}
