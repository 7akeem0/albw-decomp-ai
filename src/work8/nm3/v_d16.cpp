#include "ds3.h"
struct S2D16 { void* m0; u32 m4; void* m8; void* mC; void* m10; void* m14; u8 b18; u8 b19; f32 f1C; };
struct X2D16 { char pad[0x600]; u32 m600; };
void func_002D1678(S2D16* p, X2D16* x, u32 b) {
    p->m0 = x; p->m4 = b;
    p->m8 = (void*)x->m600;
    p->mC = (char*)x + 0x3d0;
    p->m10 = (char*)x + 0x3dc;
    p->m14 = (char*)x + 0x3e8;
    p->b18 = 0; p->b19 = 0;
    p->f1C = 0.0f;
}
