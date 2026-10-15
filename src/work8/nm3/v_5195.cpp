#include "ds6.h"

void func_0012C790(void* p);
void func_001B6B38(void* p);

struct Sub519544 { char _pad[0xd]; u8 m0d; u8 m0e; };
struct Obj519544 { char _pad[0xb0]; Sub519544* m0b0; };

void func_00519544(Obj519544* self) {
    Sub519544* p = self->m0b0;
    if (p && (p->m0d != 0 || p->m0e != 0)) {
        func_0012C790(p);
        func_001B6B38(self->m0b0);
    }
}
