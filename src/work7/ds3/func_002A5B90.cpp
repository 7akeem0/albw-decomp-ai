#include "ds3.h"
extern "C" void func_004FC07C(void*, int, int, int);
struct Pair { u32 cur, max; };
void func_002A5B90(char* self, u32 a1) {
    u32 v = a1 & 0xff;
    if (v != 0x1e && (v - 0xe) > 3) return;
    if (*(u8*)(self + 0xb90) == 0) return;
    if (*(u8*)(self + 0xb92) >= 3) return;
    if (*(u8*)(self + 0xb90) == 1) func_004FC07C(self, 0x1a, -1, 0);
    else func_004FC07C(self, 0x19, -1, 0);
    Pair p = *(Pair*)(self + 0xb54);
    if (p.cur < p.max) *(u32*)(self + 0xb54) = p.cur + 1;
}
