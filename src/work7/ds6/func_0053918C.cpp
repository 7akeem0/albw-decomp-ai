#include "ds6.h"

bool func_0053918C(void* self, s8* p) {
    s8 v = *p;
    if ((u32)(v - 2) <= 3 || (u32)(v - 0x16) <= 1)
        return (u32)(v - 4) > 1 && (u32)(v - 0x16) > 1;
    return false;
}
