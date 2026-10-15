#include "ds2.h"

extern int func_0051D27C(void*, u32, u32);
__attribute__((weak)) extern void func_0065AAC8(void*, int);
extern u32 data_0070AE10;

struct Obj1AAEBC {
    char pad0[0x3e8];
    u32 m3E8;
    char pad3ec[0x904 - 0x3ec];
    char m904;
    char pad905[0x928 - 0x905];
    u32 m928;
    char pad92c[0x964 - 0x92c];
    u8 m964;
};

void func_001AAEBC(Obj1AAEBC* self) {
    u8 f = self->m964;
    u32 v = self->m928;
    char* p = (char*)self + 0x904;
    if (f != 0) {
        self->m3E8 = v;
        goto call;
    }
    if (func_0051D27C((char*)self + 0x3e8, v, data_0070AE10) == 0) return;
call:
    func_0065AAC8(p, 2);
}
