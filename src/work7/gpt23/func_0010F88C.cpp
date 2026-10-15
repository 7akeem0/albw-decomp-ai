#include "range.h"
extern "C" s32 func_0010F88C(s32 value) {
    if (value >= 0x20) return value - 0x20;
    s32 base;
    if (value >= 0x18) {
        base = 0x5109d500;
        value -= 0x18;
    } else base = 0x6c8da500;
    return value + base;
}
