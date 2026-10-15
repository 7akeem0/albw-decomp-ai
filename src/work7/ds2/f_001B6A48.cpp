#include "ds2.h"

extern void func_00231340(void*);

struct VT1B6A48 {
    char pad14[0x14];
    void (*f5)(void*);
    char pad18[0x24 - 0x18];
    void (*f9)(void*);
};
struct Obj1B6A48 {
    VT1B6A48* vt;
    char pad4[0xd - 4];
    u8 mD;
    u8 mE;
};

u32 func_001B6A48(Obj1B6A48* self) {
    if (self->mE != 1) return 0;
    if (self->mD != 1) self->vt->f5(self);
    func_00231340((char*)self + 0x20);
    self->mE = 3;
    self->vt->f9(self);
    self->mD = self->mE;
    return 1;
}
