#include "ds6.h"

void func_0012C718(void* p);

struct Sub51C048 {
    char _pad[0xd];
    s8 m0d;
    u8 m0e;
};

struct Obj51C048 {
    char _pad[0x10c];
    Sub51C048* m10c;
};

void func_0051C048(Obj51C048* self) {
    Sub51C048* p = self->m10c;
    if (!p) return;
    if (p->m0d == 1 || (p->m0d == 3 && p->m0e == 3)) func_0012C718(p);
}
