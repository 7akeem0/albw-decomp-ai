#include "ds2.h"

extern void func_004B9528(void*, u32);
extern void func_001B6DE0(void*);

struct Obj1B6D8C {
    char pad0[0x10];
    void* m10;
    char pad14[0x38 - 0x14];
    u32 m38;
    char pad3c[0x40 - 0x3c];
    u32* m40;
    char pad44[0xc4 - 0x44];
    u8 mC4;
};

void func_001B6D8C(Obj1B6D8C* self) {
    void* p = self->m10;
    if (p) {
        u32* it = self->m40;
        u32* end = self->m40 + self->m38;
        for (; it != end; ++it) func_004B9528(p, *it);
    }
    self->mC4 = 0;
    func_001B6DE0(self);
}
