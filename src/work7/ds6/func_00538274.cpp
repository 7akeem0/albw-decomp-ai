#include "ds6.h"

struct Obj538274 { char _pad[0x30]; s8 m30; };

bool func_00538274(Obj538274* self) {
    s8 v = self->m30;
    if ((u32)(v - 2) <= 3 || (u32)(v - 0x16) <= 1)
        return (u32)(v - 4) > 1 && (u32)(v - 0x16) > 1;
    return false;
}
