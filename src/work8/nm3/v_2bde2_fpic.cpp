#include "ds3.h"
struct Pair93C { u32 a, b; };
struct S2BDE64 { char pad[0x36]; u16 m36; char pad2[0x8bc-0x38]; char m8bc[0x80]; Pair93C p93C; };
extern "C" int func_00588BF0(S2BDE64*, int);
extern "C" void func_00662A14(void*, int);
void func_002BDE64(S2BDE64* self) {
    if (self->m36 != 0) {
        if (func_00588BF0(self, 0) == 0) return;
    }
    Pair93C p = self->p93C;
    if (p.a < p.b) { self->p93C.a = p.a + 1; }
    else { func_00662A14((char*)self + 0x8bc, 1); }
}
