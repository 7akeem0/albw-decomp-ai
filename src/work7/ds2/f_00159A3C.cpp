#include "ds2.h"

extern void func_004FABDC(void*, int, int, int);
extern void func_003C26B8(void*);
extern void func_003C2630(void*);

struct Obj159A3C {
    char pad0[0x59c];
    BitFlag32 m59C;
    char pad5a0[0x978 - 0x5a0];
    f32 m978;
};

void func_00159A3C(Obj159A3C* self) {
    self->m59C.reset(4);
    self->m59C.reset(0x80);
    self->m59C.reset(1);
    self->m59C.reset(2);
    self->m978 = 0.0f;
    func_004FABDC(self, 1, -1, 0);
    func_003C26B8((char*)self + 0x8e0);
    func_003C2630((char*)self + 0x8e0);
}
