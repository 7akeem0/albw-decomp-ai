#include "ds6.h"

struct ListNodeA74D8 { void* m0; void* m4; void erase_(); };
struct Sub4A74D8 { char _pad[0x18]; s32 m18; s32 m1c; };
struct Node4A74D8 { char _pad[0xc]; Sub4A74D8* mC; };
struct Obj4A74D8 { char _pad[0xc]; s32 mC; void* m10; };

void func_0058FA5C(void* p);

void func_004A74D8(Obj4A74D8* a, Node4A74D8* n) {
    Sub4A74D8* p = n->mC;
    ((ListNodeA74D8*)((char*)n + p->m1c))->erase_();
    if (--p->m18 == 0) {
        ((ListNodeA74D8*)((char*)a->m10 + (int)p))->erase_();
        a->mC--;
        func_0058FA5C(p);
    }
}

