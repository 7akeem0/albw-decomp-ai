#include "range.h"
extern "C" char* func_0011E840(RelativeOwner11E8* p,s32 index) {
    if(p->selected!=-1) return p->slots[p->selected].block->get(index);
    return 0;
}
