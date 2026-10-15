#include "ds6.h"

struct Sub51BAA0 { char _pad[0xd]; u8 m0d; u8 m0e; };
struct Obj51BAA0 {
    char _pad[0x54];
    Sub51BAA0* m54;
    s16 m58;
};

void func_0012C790(void* p);
void func_001B6B38(void* p);

void func_0051BAA0(Obj51BAA0* self) {
    if (self->m58 != 4 && self->m58 != 5) return;
    Sub51BAA0* p = self->m54;
    if (p == 0) return;
    if (p->m0d == 0 && p->m0e == 0) return;
    func_0012C790(p);
    func_001B6B38(self->m54);
}

