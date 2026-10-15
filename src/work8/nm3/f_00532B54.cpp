#include "ds6.h"

struct E532B54 { char _pad[0x1c]; f32 m1c; char _pad2[0x38 - 0x20]; };
struct Arr532B54 {
    char _pad[8];
    s32 m8;
    E532B54* mC;
    E532B54* at(s32 i) { if ((u32)i < (u32)m8) return mC + i; return mC; }
};
struct Obj532B54 { s16 m0; s16 m2; s32 m4; Arr532B54* m8; };

f32 func_00532B54(Obj532B54* self) {
    Arr532B54* a = self->m8;
    if (a) { s16 i = self->m2; if (i >= 0) return a->at(i)->m1c; }
    return 0.0f;
}

