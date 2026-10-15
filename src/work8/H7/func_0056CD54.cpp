#include "h7.h"

struct Rec0056CD54 { u32 m0; u32 m4; u8 m8; u8 m9; };
struct Obj0056CD54 { char _0[0x3c]; void* m3c; };

void* func_0056AF9C(void* p, u32 a);
Rec0056CD54* func_0056B970(void* q);

u32 func_0056CD54(Obj0056CD54* self, u32 a, Rec0056CD54* out) {
    void* q = func_0056AF9C(self->m3c, a);
    if (q == 0) return 0;
    Rec0056CD54* r = func_0056B970(q);
    if (r == 0) return 0;
    out->m0 = r->m0;
    out->m4 = r->m4;
    out->m8 = r->m8;
    out->m9 = r->m9;
    return 1;
}
