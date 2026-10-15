#include "ds3.h"
struct Y2C6D { char pad8[8]; char pad2C[0x2c-8]; void* m2C; };
struct M2C6D { char pad; s8 kind; };
struct S2C6D { char pad[0x469]; u8 f469; u8 f46A; };
bool func_002C6DCC(S2C6D* p, Y2C6D* y) {
    M2C6D* m = (M2C6D*)y->m2C;
    if (!m) return false;
    s8 k = m->kind;
    if (k == 2) { p->f46A = 1; return true; }
    if (k == 0x1f) { p->f469 = 1; return true; }
    return false;
}
