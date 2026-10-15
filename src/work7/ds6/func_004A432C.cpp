#include "ds6.h"

struct Elem4A432C { char _pad[0x14]; f32 m14; char _pad2[0x38 - 0x18]; };
struct Sub4A432C {
    char _pad0[8];
    s32 m8;
    Elem4A432C* mC;
    Elem4A432C& at(s32 i) { Elem4A432C* p = mC; if ((u32)i < (u32)m8) p = p + i; return *p; }
};
struct Obj4A432C {
    char _pad[0x1c];
    Sub4A432C* m1c;
    char _pad2[0x84 - 0x20];
    u8 m84;
};

void func_002313DC(void* p);

void func_004A432C(Obj4A432C* self) {
    if (self->m84 != 0) return;
    Sub4A432C* p = self->m1c;
    if (p->at(1).m14 != 0.0f) return;
    self->m84 = 1;
    func_002313DC((char*)self + 0x50);
}
