#include "ds6.h"
struct Node2_4CD878 { char _pad[8]; s32 m8; };
struct ListNode4CD878 { ListNode4CD878* m0; ListNode4CD878* m4; void* m8; Node2_4CD878* mC; void erase_(); };
struct Obj4CD878 { char _pad[0x10]; ListNode4CD878 node; char _pad2[0x38 - 0x20]; u8 m38; };void func_004CD878(void* a, Obj4CD878* n) {
    if (n->m38 == 0) return;
    ListNode4CD878* node = &n->node;
    Node2_4CD878* owner = n->node.mC;
    if (owner != 0) { node->mC = 0; node->erase_(); owner->m8--; }
    n->m38 = 0;
}
