#include "range.h"
extern "C" void func_004CF51C(void*);
extern "C" void func_00130134(ObjectListOwner* p) {
    ObjectListNode* end = &p->sentinel;
    for (ObjectListNode* node=end->next; node!=end; node=node->next)
        func_004CF51C(node->object);
}
