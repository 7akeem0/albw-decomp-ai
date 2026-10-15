#include "ds2.h"

extern void func_0065B29C(void*, int);

struct Obj1B53B8 {
    char pad0[0x8c0];
    s8 m8C0;
    char pad8c1[0x988 - 0x8c1];
    u32 m988;
};

int func_001B53B8(Obj1B53B8* self, u32* p) {
    s8 c = self->m8C0;
    if (c != 7 && c != 8 && c != 9 && c != 10) {
        self->m988 = *p;
        func_0065B29C((char*)self + 0x8bc, 6);
        return 1;
    }
    return 0;
}
