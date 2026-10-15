#include "ds6.h"

struct Obj4FB220 { char _pad[0x657]; u8 m657; };

bool func_004FB220(Obj4FB220* self, u32 a, u32 b) {
    u32 x, y;
    if (a == 6) {
        x = 1;
        y = (b == 0xf || b == 0x18) ? 1u : 0u;
    } else {
        x = (b == 0x12) ? 1u : 0u;
        y = 0;
    }
    if (self->m657 != 0 && x != 0) {
        if (y == 0) return true;
    }
    return false;
}

