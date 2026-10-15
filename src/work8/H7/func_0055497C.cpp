#include "h7.h"

struct Tab55497C { char _0[8]; float m8; char _c[8]; };
extern Tab55497C data_00708A18[];

struct Sub55497C { char _0[0x20]; float m20; };
struct Obj55497C {
    char _0[0x94];
    Sub55497C* m94;
    char _98[0x29e - 0x98];
    s16 m29e;
};

float func_0055497C(Obj55497C* self) {
    s16 idx = self->m29e;
    if (idx >= 0) {
        if (idx < 1) return data_00708A18[idx].m8;
    }
    return self->m94->m20;
}
