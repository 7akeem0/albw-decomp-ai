#include "range.h"
extern "C" void func_0010F1DC(OffsetList*,void*);
extern "C" void func_00109730(OffsetListOwner* p,void* object) {
    OffsetList* list = &p->list;
    func_0010F1DC(list,(char*)object + list->offset);
    ++list->count;
}
