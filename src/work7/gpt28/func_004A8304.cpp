#include "range.h"
struct List4A83;
struct Node4A83 { Node4A83* previous; Node4A83* next; u32 m8; List4A83* owner; };
struct List4A83 { Node4A83* first; Node4A83* last; u32 count; };
struct Item4A83 { char pad0[0x30]; Node4A83 node; };
extern void func_0010F1F8(Node4A83*);
void f_004A8304(void*, Item4A83* item) {
    List4A83* owner=item->node.owner;
    Node4A83* node=&item->node;
    if(owner) { node->owner=0; func_0010F1F8(node); --owner->count; }
}
