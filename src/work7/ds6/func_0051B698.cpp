#include "ds6.h"

void* func_0058DEF4(void* self);
void func_00452CA0(void* p);

struct Obj51B698 {
    char _pad[0x70];
    void* m70;
    u16 m74;
};

void func_0051B698(Obj51B698* self) {
    if (!func_0058DEF4(self)) return;
    if (self->m74 != 3) return;
    if (!self->m70) return;
    func_00452CA0(self->m70);
}
