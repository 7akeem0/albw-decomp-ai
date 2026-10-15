#include "range.h"
extern u32 func_003D56B8(u32);
u32 func_003D56F0(u32 index) {
    if (index >= 4) return 0xD8E06BED;
    return func_003D56B8(1u << index);
}
