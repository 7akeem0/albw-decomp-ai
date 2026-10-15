#include "ds2.h"
extern f32 func_0052F864(void*);
extern s32 func_002FCC74(void*, u16);

struct S400 { u8 pad0[0xbc]; u8 obj[8]; void* p_c4; void* p_c8; u8 f_cc; u8 f_cd; };

void func_001BFD34(char* self) {
    S400* s = (S400*)(self + 0x400);
    if (s->f_cc == 0) return;
    if (s->f_cd != 0) {
        char* p = *(char**)(self + 0x4c4);
        char* vt = (char*)*(void**)p;
        (*(void (*)(void*, void*, int))(*(void**)(vt + 0x4c)))(p, self + 0x4bc, 0);
        *(u8*)(self + 0x4cd) = 0;
        *(u8*)(self + 0x4cc) = 0;
        return;
    }
    f32 v = func_0052F864(self);
    u16 h = (u16)(u32)v;
    if (func_002FCC74(*(void**)(self + 0x4c8), h) != 0) *(u8*)(self + 0x4cc) = 0;
}
