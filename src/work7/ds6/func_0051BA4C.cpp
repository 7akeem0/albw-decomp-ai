#include "ds6.h"

struct Obj51BA4C {
    char _pad[0x20];
    u32 m20;
    char _pad2[0x80 - 0x24];
    void* m80;
    char _pad3[0xe0 - 0x84];
    void* mE0;
    char _pad4[0x33d - 0xe4];
    u8 m33d;
};

extern void* data_0070B850;
void func_0016656C(void* p, u32 a);
void func_0043D620(void* p);
void func_0012C790(void* p);

void func_0051BA4C(Obj51BA4C* self) {
    if (self->m33d != 0) func_0016656C(data_0070B850, self->m20);
    self->m33d = 0;
    if (self->m80) func_0043D620(self->m80);
    if (self->mE0) func_0012C790(self->mE0);
}
