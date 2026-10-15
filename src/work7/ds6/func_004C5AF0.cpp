#include "ds6.h"

extern void func_004C4870();
void func_0052FD7C(void* p, void* f, u32 a);
void func_004C45C4(void* p);

struct Obj4C5AF0 {
    char _pad[0x3dbe8];
    u32 m3dbe8;
};

void func_004C5AF0(Obj4C5AF0* self) {
    func_0052FD7C((char*)self + 0x3dbbc, (void*)func_004C4870, 0);
    func_004C45C4(self);
    self->m3dbe8 = 0;
}
