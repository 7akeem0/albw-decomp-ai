#include "ds2.h"

extern bool func_0058A8F0(void*);
__attribute__((weak)) extern void func_00657BD4(void*, int);
extern void func_00153230(void*);

struct Obj1531E0 {
    char pad0[0x8fc];
    u32 m8FC;
};

void func_001531E0(Obj1531E0* self) {
    if (!func_0058A8F0(self)) {
        func_00153230(self);
        return;
    }
    if (self->m8FC < 0x1e) {
        self->m8FC = self->m8FC + 1;
        return;
    }
    func_00657BD4((char*)self + 0x90c, 3);
}
