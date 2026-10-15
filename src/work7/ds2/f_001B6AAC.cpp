#include "ds2.h"

extern s32 func_00532C2C(void*);
extern void func_001B6B00(void*);

struct VT1B6AAC {
    char pad[0x3c];
    void (*f)(void*);
};
struct Obj1B6AAC {
    VT1B6AAC* vt;
    char pad4[0x9d - 4];
    u8 m9D;
};

void func_001B6AAC(Obj1B6AAC* self) {
    if ((self->m9D & 2) && func_00532C2C((char*)self + 0x20) < 0x10
        && (func_00532C2C((char*)self + 0x20) & 3) == 0)
        self->vt->f(self);
    func_001B6B00(self);
}
