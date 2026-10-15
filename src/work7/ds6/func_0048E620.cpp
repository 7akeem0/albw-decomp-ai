#include "ds6.h"

struct ListNode48E620 { void* m0; void* m4; void* m8; ListNode48E620* mC; void erase_(); };
struct Sub48E620 { char _pad[0x10]; ListNode48E620 node; };
struct Obj48E620 { char _pad[0x18]; s32 m18; Sub48E620* m1c; };

void func_0048E620(Obj48E620* self, Sub48E620* n) {
    ListNode48E620* node = n ? &n->node : 0;
    if (node->mC) {
        node->mC = 0;
        node->erase_();
        self->m18--;
    }
    if (self->m1c == n) self->m1c = 0;
}

