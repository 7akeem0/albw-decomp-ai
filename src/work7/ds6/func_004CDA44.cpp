#include "ds6.h"

struct V4CDA44 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
};
struct Obj4CDA44 {
    char _pad[0x44];
    u32 m44;
};

u32 func_004CDB2C(Obj4CDA44* self, u32 a);
void func_004CD960(Obj4CDA44* self);

bool func_004CDA44(Obj4CDA44* self, u32 a) {
    if (func_004CDB2C(self, a) != 0) return true;
    if (self->m44 != a) return false;
    ((V4CDA44*)(void*)self->m44)->v8();
    self->m44 = 0;
    func_004CD960(self);
    return true;
}

