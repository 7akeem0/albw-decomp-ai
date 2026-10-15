#include "ds3.h"
struct Q2D42 { char pad[4]; s32 m4; };
struct M2D42 { char pad[0x20]; Q2D42* m20; };
struct S2D42 { char pad[4]; void* m4p; };
extern "C" void func_004CF5DC(void*, s32, void*, void*);
void func_002D429C(S2D42* p, void* a, void* b) {
    s32 i = 0;
    Q2D42* q = ((M2D42*)p->m4p)->m20;
    s32 n = q->m4;
    if (n <= 0) return;
    for (; i < n; ++i) func_004CF5DC(p->m4p, i, a, b);
}
