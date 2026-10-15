#include "ds6.h"

extern const u32 ro_006935DC;
extern const u32 ro_006935E0;
extern const u32 ro_006935E4;

struct Obj527B5C { char _pad[8]; u32 m8; };

bool func_00527B5C(Obj527B5C* self) {
    u32 v = self->m8;
    if (v == ro_006935DC) return true;
    if (v == ro_006935E0) return true;
    return v == ro_006935E4;
}

