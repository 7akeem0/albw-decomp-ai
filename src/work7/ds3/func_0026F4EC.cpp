#include "ds3.h"
struct Rec26F4EC { u8 b0; u8 pad[0xb]; };
extern Rec26F4EC data_0070BA58[];
void func_00660BA4(void*, s32) __attribute__((weak));
struct S26F4EC { char pad[8]; s8 b8; char pad2[0x40-9]; u32 m40; u32 m44; u32 m48; u32 m4c; };
void func_0026F4EC(S26F4EC* self, s32 kind, const u32* v) {
    s32 old = self->b8;
    if (old != -1 && data_0070BA58[old].b0 > data_0070BA58[kind].b0) return;
    const s32 one = 1;
    self->b8 = (s8)kind;
    self->m40 = 0;
    u32* d = &self->m44;
    d[0] = v[0];
    d[1] = v[1];
    d[2] = v[2];
    func_00660BA4((char*)self + 0xc, one);
}
