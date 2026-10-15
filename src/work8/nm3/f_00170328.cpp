#include "ds2.h"

extern void func_001708A0(void*, u32, int);
extern void func_00170558(void*, u32);

struct VT1703 {
    char pad[0x10];
    u32 (*f4)(void*,u32);
};
struct Obj1703 {
    VT1703* vt;
};

u32 func_00170328(Obj1703* self, u32 a, u32 b) {
    if (a != 0 && self->vt->f4(self,a) == 0) return 0;
    func_001708A0(self, b, 1);
    func_00170558(self, b);
    return 1;
}

