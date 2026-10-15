#include "h7.h"

struct Obj003DB7C4 {
    u32 m0;
    char _4[8];
    u8 m0c;
};

u32 func_003DB7C4(Obj003DB7C4* self) {
    u32 a = (self->m0 * 1000u) / 4888u;
    if (a == 0) a = 1;
    u32 m = (self->m0c != 0) ? 4 : 2;
    return (5 * (m * a)) << 7;
}
