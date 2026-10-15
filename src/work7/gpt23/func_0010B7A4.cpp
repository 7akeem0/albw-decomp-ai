#include "range.h"
extern "C" void func_0010F1DC(OffsetList*,void*);
extern "C" void func_0010B7A4(OffsetOwnerB7* p,OffsetItemB7* item) {
    OffsetItemB7* node = item;
    OffsetList* list = &p->list;
    func_0010F1DC(list,(char*)node + list->offset);
    ++list->count;
    node->owner = p;
}
