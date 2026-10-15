#include "ds2.h"
void func_001E692C(void*);
void func_004BDEE8(void*);
void func_004BF828(void*);
u32 func_0054D89C(void*, u32);
void func_004BDBAC(void*, u32);
struct This185 {
    char pad0[0x2d7];
    u8 m2d7;
    char pad1[0x78c - 0x2d8];
    u32 m78c;
    char pad2[0x857 - 0x790];
    u8 m857;
    char pad3[0x85a - 0x858];
    u8 m85a;
    char pad4[0x8ac - 0x85b];
    u32 m8ac;
};

void func_00185990(This185* t) {
    if (t->m2d7) return;
    func_001E692C(t);
    if (!t->m85a) {
        if (!t->m857) func_004BF828(t);
        else func_004BDEE8(t);
    }
    if (t->m8ac & 0x40) return;
    t->m78c = func_0054D89C(t, 0);
    func_004BDBAC(t, 0);
}
