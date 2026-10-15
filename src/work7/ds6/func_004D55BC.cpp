#include "ds6.h"

struct Sub4D55BC { char _pad[0x2c]; void* m2c; };

struct Obj4D55BC {
    char _pad[0xfc];
    void* mfc;
    char _pad2[0x110 - 0x100];
    u8 m110;
};

void func_0034C8F0(void* a, u32 b, void* c);

bool func_004D55BC(Obj4D55BC* self, Sub4D55BC* s) {
    func_0034C8F0(self->mfc, 0, s);
    if (s->m2c) {
        if (*((u8*)s->m2c + 1) == 0xf) self->m110 = 1;
    }
    return false;
}

