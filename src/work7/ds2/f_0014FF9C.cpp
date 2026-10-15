#include "ds2.h"

extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern void func_0014E9A0(void*, void*, void*);

struct Obj14FF9C {
    char pad0[0x24];
    u32 m24;
    u32 m28;
};

void func_0014FF9C(Obj14FF9C* self, void* a) {
    if (self->m24 & 0x10) return;
    void* p = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m28);
    if (!p) return;
    func_0014E9A0(p, self, a);
}
