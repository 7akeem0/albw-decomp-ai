#include "ds3.h"
struct Timer268970 { u32 cur; u32 max; f32 rate;
    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / n; else rate = 0.0f; cur = c; } };
void func_004FABDC(void*, s32, s32, s32);
struct S268970 { char pad[0xafc]; Timer268970 t1; Timer268970 t2; };
void func_00268970(S268970* self) {
    func_004FABDC(self, 0x14, -1, 0);
    self->t2.start(0x3c);
    self->t1.start(0x5a, 0);
}
