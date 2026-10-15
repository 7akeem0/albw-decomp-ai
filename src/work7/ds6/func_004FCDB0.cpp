#include "ds6.h"

struct Obj4FCDB0 {
    char _pad[0x59c];
    BitFlag m59c;
};

void func_004FCD5C(void* p, u32 a);

void func_004FCDB0(Obj4FCDB0* self) {
    self->m59c.set(1);
    func_004FCD5C((char*)self + 0x5a8, 1);
    self->m59c.set(2);
    func_004FCD5C((char*)self + 0x5a8, 1);
}

