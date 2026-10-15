#include "ds6.h"

struct Obj48ED44 {
    char _pad[0x1c];
    s32 m1c;
};

void* func_00409F74(void* p, u32 v);
void func_00407AB8(void* p, u32 a);

void func_0048ED44(Obj48ED44* self, u32 a) {
    s32 n = self->m1c;
    if (n != 0) {
        u32 base = 0x4000000;
        for (u32 i = 0; i < (u32)n; i++) {
            func_00407AB8(func_00409F74((char*)self + 4, base + i), a);
        }
    }
}
