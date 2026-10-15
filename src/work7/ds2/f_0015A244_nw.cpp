#include "ds2.h"

extern s32 func_005211BC(void*, f32, f32);
 extern void func_00658228(void*, int);

struct Obj15A244 {
    char pad0[0x95c];
    u32 m95C;
    u32 m960;
};

void func_0015A244(Obj15A244* self) {
    u32 a = self->m95C;
    u32 b = self->m960;
    if (b > a) {
        self->m95C = a + 1;
        return;
    }
    if (func_005211BC(self, 4.0f, 0.0f)) func_00658228((char*)self + 0x8bc, 2);
}
