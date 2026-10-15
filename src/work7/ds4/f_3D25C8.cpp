#include "ds4.h"

extern "C" u32 func_003D25C8(u32* a0, u16* p) {
    if (p[0] != 0x2f) return 0xe0e046c9u;
    while (p[1] == 0x2f) p++;
    a0[0] = (u32)p;
    a0[1] = (u32)p;
    a0[2] = (u32)(p + 1);
    while (*(u16*)(a0[2]) == 0x2f) a0[2] += 2;
    return 0;
}
