#include "ds3.h"
struct Q28C8 { char pad[4]; s32 m4; };
struct M28C8 { char pad[0x20]; Q28C8* m20; };
struct S28C8 { char pad[0x10]; void* m10; };
extern "C" void func_004CF5DC(void*, s32, void*, void*);
void func_0028C854(S28C8* p, void* a, void* b) {
    s32 i = 0;
    Q28C8* q = ((M28C8*)p->m10)->m20;
    s32 n = q->m4;
    if (n <= 0) return;
    for (; i < n; ++i) func_004CF5DC(p->m10, i, a, b);
}
