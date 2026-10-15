#include "ds6.h"

struct Obj52FBA0;
struct Obj52FBA0 {
    char _pad[4];
    Obj52FBA0** m4;
    char _pad2[0x2cc - 8];
    u32 m2cc;
    char _pad3[0x2d7 - 0x2d0];
    u8 m2d7;
};

Obj52FBA0* func_0052FBA0(Obj52FBA0* a, u32 h) {
    if (h == 0) return 0;
    u32 i = h >> 22;
    Obj52FBA0* p = a->m4[i];
    if (p != 0 && p->m2d7 == 0 && p->m2cc == h) return p;
    return 0;
}
