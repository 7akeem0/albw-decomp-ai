#include "ds6.h"

extern void* data_0070FB60;
u32 func_00537C00(void* p, s32 i);

bool func_004C0C80() {
    for (s32 i = 0; i < 5; i++) {
        if (func_00537C00(data_0070FB60, i) == 0) return true;
    }
    return false;
}
