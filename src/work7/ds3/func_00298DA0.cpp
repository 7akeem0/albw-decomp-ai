#include "ds3.h"
struct S298DA0 { char pad[0x2cc]; u32 m2CC; char pad2[0x34a-0x2d0]; u8 b34A; u8 b34B; char pad3[0x354-0x34c]; u8 b354; };
extern "C" void* data_00708998;
extern "C" u32 func_00589030(void*, u32);
extern "C" int func_00588BF0(S298DA0*, int);
void func_00298DA0(S298DA0* self) {
    if (self->b34B == 0) {
        u32 r = func_00589030(data_00708998, self->m2CC);
        self->b34B = (u8)r;
        if (r == 0) {
            if (func_00588BF0(self, 0) == 0) return;
        }
    }
    self->b34A = 1;
    self->b354 = 1;
}
