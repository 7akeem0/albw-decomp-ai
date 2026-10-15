#include "ds6.h"

struct Sub4BA5F0 { char _pad[0x2c]; void* m2c; };

struct Obj4BA5F0 {
    char _pad[0xc0];
    void* mc0;
    char _pad2[0x103 - 0xc4];
    u8 m103;
};

void func_0034C8F0(void* a, u32 b, void* c);

bool func_004BA5F0(Obj4BA5F0* self, Sub4BA5F0* s) {
    func_0034C8F0(self->mc0, 0, s);
    if (s->m2c) {
        if (*((u8*)s->m2c + 1) == 0xf) self->m103 = 1;
    }
    return false;
}

