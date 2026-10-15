#include "ds2.h"
struct Thing224 { char pad[0x468]; s32 m468; };

s32 func_00224FB8(Thing224* t, s32 k, f32 v) {
    s32 a = t->m468;
    s32 b = k + 15;
    if (a < b) return 0;
    s32 d = a - b;
    if (d < 50) return (s32)0xfe93e93f;
    if (d >= 60) return (s32)v;
    return ((60 - d) * (s32)0xfe93e93f) / 10;
}
