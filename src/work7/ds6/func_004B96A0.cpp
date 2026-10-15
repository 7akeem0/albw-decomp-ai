#include "ds6.h"

struct ListNode4B96A0 { void* m0; void* m4; void erase_(); };
struct Node4B96A0 { char _pad[0x18]; u32 m18; u32 m1c; };
struct Obj4B96A0 {
    char _pad[0x58];
    char m58[8];
    s32 m60;
    s32 m64;
};

void func_0049F434(void* p, u32 a, u32 b);

void func_004B96A0(Obj4B96A0* self, Node4B96A0* n) {
    if (n->m1c != 0 || n->m18 != 0) {
        ((ListNode4B96A0*)((char*)n + self->m64))->erase_();
        self->m60 -= 1;
        func_0049F434((char*)self + 0x58, self->m64, 0x2c0028);
    }
}
