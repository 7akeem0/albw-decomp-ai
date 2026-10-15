#include "ds2.h"

extern void* g_70FB60;
extern s32 func_00556B94(void*);
extern void func_00588C14(void*, int, int);
extern void func_00547514(void*);

struct Obj1CCF50 {
    char pad0[0x36];
    u16 m36;
    char pad38[0x2d7 - 0x38];
    u8 m2D7;
};

void func_001CCF50(Obj1CCF50* self) {
    if (func_00556B94(g_70FB60) != 0) return;
    if (self->m36 != 0) {
        func_00588C14(self, 0, 1);
    } else {
        func_00547514((char*)self + 4);
    }
    self->m2D7 = 1;
}
