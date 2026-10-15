#include "ds3.h"
struct S2604 { virtual void v0(); virtual void v1(); virtual s32 v2(); char g[0x30-4]; void* m30; };
extern "C" void func_0034BA3C(void*, void*, s32);
extern "C" void func_004B948C(void*, void*);
void func_002604BC(S2604* p, void* a, void* b) {
    func_0034BA3C(p->m30, a, p->v2());
    func_004B948C(b, p->m30);
}
