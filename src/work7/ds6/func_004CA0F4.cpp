#include "ds6.h"

struct Obj4CA0F4 {
    char _pad[0x2d7];
    u8 m2d7;
    char _pad2[0x59c - 0x2d8];
    BitFlag m59c;
};

void func_004FCD5C(void* p, u32 a);
void func_004FCDF4(void* p, u32 v);

void func_004CA0F4(Obj4CA0F4* self) {
    self->m59c.clear(1);
    func_004FCD5C((char*)self + 0x5a8, 0);
    self->m59c.clear(2);
    func_004FCDF4((char*)self + 0x5a8, 0);
    self->m2d7 = 1;
}

