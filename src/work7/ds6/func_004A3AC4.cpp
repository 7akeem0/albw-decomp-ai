#include "ds6.h"

struct ListNodeA3AC4 { void* m0; void* m4; void erase_(); };
struct Sub4A3AC4 { char _pad[0x18]; s32 m18; s32 m1c; };
struct Node4A3AC4 { char _pad[0xc]; Sub4A3AC4* mC; };
struct Obj4A3AC4 { char _pad[0xc]; s32 mC; void* m10; };

void func_0058FA5C(void* p);

void func_004A3AC4(Obj4A3AC4* a, Node4A3AC4* n) {
    Sub4A3AC4* p = n->mC;
    ((ListNodeA3AC4*)((char*)n + p->m1c))->erase_();
    if (--p->m18 == 0) {
        ((ListNodeA3AC4*)((char*)a->m10 + (int)p))->erase_();
        a->mC--;
        func_0058FA5C(p);
    }
}

