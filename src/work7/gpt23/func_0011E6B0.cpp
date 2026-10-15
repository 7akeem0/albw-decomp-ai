#include "range.h"
extern "C" s32 func_0011E6B0(IndexedOwner11E6* p,s32 index) {
    if(p->selected!=-1) {
        IndexedRecord8* record=p->slots[p->selected].block->at(index);
        if(record)return record->value;
    }
    return -1;
}
