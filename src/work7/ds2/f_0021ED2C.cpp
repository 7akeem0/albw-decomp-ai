#include "ds2.h"

extern void func_0065E398(void*, int);
extern void func_004F7E8C(void*, void*);

struct SubED { char pad[0x10]; u16 m10; };
struct Obj21ED2C {
    char pad0[0x8c4];
    u8 m8C4;
    char pad8c5[0xa68 - 0x8c5];
    u32 mA68;
};

void func_0021ED2C(Obj21ED2C* self, void* a) {
    if (self->m8C4 == 0xc) {
        SubED* p = *(SubED**)((char*)a + 0x2c);
        if (p && p->m10 != 0 && self->mA68 > 0x3c)
            func_0065E398((char*)self + 0x8c0, 0xe);
    }
    func_004F7E8C(self, a);
}
