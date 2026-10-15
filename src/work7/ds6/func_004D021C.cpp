#include "ds6.h"

struct Obj4D021C {
    char _pad[0x7b0];
    void* m7b0;
    void* m7b4;
};

void func_0014FD48(Obj4D021C* self);
u32 func_00584E64(void* p);
u32 func_00584E70(void* p);
void func_004D0194(void* p, s32 v);
void func_004D0268(void* p, s32 v);

void func_004D021C(Obj4D021C* self) {
    func_0014FD48(self);
    u32 a = func_00584E64(self->m7b0);
    func_004D0194(self->m7b4, a);
    u32 b = func_00584E70(self->m7b0);
    func_004D0268(self->m7b4, b);
}

