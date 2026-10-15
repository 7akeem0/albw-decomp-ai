#include "range.h"
extern "C" void func_004FC07C(void*,s32,s32,s32);
extern "C" void func_0012A3B8(void* p, s32 n) {
    u8 k = n;
    if (k >= 0x15 && k <= 0x1c)
        func_004FC07C(p,9,-1,0);
}
