#include "ds2.h"

extern char* data_00706E20;
extern f32 func_004F898C();
extern void func_004F8964(f32*, bool, f32);
extern void* func_0052FBA0(void*, u32);
__attribute__((weak)) extern void func_00658228(void*, int);

struct Obj159C7C {
    char pad0[0x994];
    u32 m994;
};

void func_00159C7C(Obj159C7C* self) {
    f32 g = func_004F898C();
    func_004F8964((f32*)((char*)self + 0x3e0), true, g);
    void* p = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m994);
    if (p == 0) {
        self->m994 = 0;
        func_00658228((char*)self + 0x8bc, 4);
    }
}
