#include "ds6.h"

extern void* data_0070FB60;
extern u32 ro_0069EC3C[];
u32 func_0055696C(void* p, u32 id);

bool func_004BF7DC() {
    for (s32 i = 0; i < 5; i++) {
        u32 id = ro_0069EC3C[i];
        if (func_0055696C(data_0070FB60, id) >= 2) return true;
    }
    return false;
}
