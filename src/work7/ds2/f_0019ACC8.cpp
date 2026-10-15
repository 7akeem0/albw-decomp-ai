#include "ds2.h"
void func_003E40F4(void*);
u32 func_003E41D0(void*, u32, u32);
void* func_0010CEE0(u32, u32, u32);
struct This19AC {
    char pad0[0x674];
    char m674[1];             // 0x674
    char pad1[0x67c - 0x675];
    u32 m67c;                 // 0x67c
    char pad2[0x68c - 0x680];
    u32 m68c;                 // 0x68c
    char pad3[0x694 - 0x690];
    u16 m694;                 // 0x694
    u16 m696;
    u16 m698;                 // 0x698
    char pad4[0x788 - 0x69a];
    u8 m788, m789, m78a;      // 0x788
    char pad5[0xa74 - 0x78b];
    u32 mA74;                 // 0xa74
    u32 mA78;                 // 0xa78
};

void func_0019ACC8(This19AC* t, u32 arg) {
    if (t->mA78) return;
    func_003E40F4(t->m674);
    t->m67c = 2;
    t->m698 = 5;
    t->m68c = 0x1f;
    t->m694 = 0xa;
    t->m788 = 1;
    t->m78a = 1;
    t->m789 = 0;
    u32 r = func_003E41D0(t->m674, 0, 0);
    t->mA74 = r;
    t->mA78 = (u32)func_0010CEE0(r, arg, 0x1000);
}
