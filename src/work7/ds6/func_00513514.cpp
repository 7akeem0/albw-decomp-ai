#include "ds6.h"

struct AArr;

struct Inner513514 {
    char _pad[0x58];
    f32 m58;
};

struct Obj513514 {
    char _pad[0x4b0];
    AArr* m4b0;
    AArr* m4b4;
    char _pad2[0x4cc - 0x4b8];
    Inner513514* m4cc;
};

void func_00513514(Obj513514* self) {
    func_0016898C(self->m4b0, Req5C(0, 6, false));
    func_0016898C(self->m4b4, Req5C(0, 6, false));
    self->m4cc->m58 *= 3.0f;
}
