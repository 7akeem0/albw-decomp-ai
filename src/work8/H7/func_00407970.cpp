#include "h7.h"

struct Obj00407970 {
    char _0[4];
    void* m4;
    char _8[0x54 - 8];
    u8 m54;
};

u32 func_0040A7EC(void* m, u32 a, u32 b, u32 c, void* self, s32 v, u32 d);

u8 func_00407970(Obj00407970* self, u32 a, u32 b, u32 c, u32 d, s8* e) {
    if (self->m54 == 0) return 0x10;
    s32 v = *e;
    return (u8)func_0040A7EC(self->m4, a, b, d, self, v, c);
}
