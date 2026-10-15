#include "ds6.h"

struct Sub4F31F8 { char _pad[0x2c]; void* m2c; };
struct Obj4F31F8 {
    char _pad[0x91c];
    u8 m91c;
};

bool func_004F31F8(Obj4F31F8* self, Sub4F31F8* p) {
    u8* q = (u8*)p->m2c;
    if (q == 0) return false;
    s8 k = (s8)q[1];
    if (k != 1) {
        if (k != 3) return false;
        if (q[3] != 1) return false;
    }
    s8 v = *(s8*)((char*)self + 0x8d8);
    if (v == 8 || v == 6) return false;
    self->m91c = 1;
    return true;
}
