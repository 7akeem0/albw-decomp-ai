#include "ds6.h"

struct Obj51ABE4 {
    char _pad[0x64];
    char m64[0xc];
    void* m70;
    u16 m74;
};

void func_0029E18C(void* p, u32 a);
void func_00437F90(void* p, u32 a, u32 b);

void func_0051ABE4(Obj51ABE4* self, u32 a, u32 b) {
    if (self->m74 != 2) func_0029E18C((char*)self + 0x64, 2);
    if (self->m70) func_00437F90(self->m70, a, b);
}
