#include "ds6.h"

u32 func_0051D188(u32* out, u32 a, u32 b) {
    u32 c = a + 0x40000000u;
    s32 d = (s32)(b - c);
    if (d < 0) {
        if (d == (s32)0x80000000u) goto big;
        d = -d;
    }
    if ((u32)d <= 0x40000000u) {
        *out = c;
        return 0;
    }
big:
    *out = c + 0x80000000u;
    return 1;
}
