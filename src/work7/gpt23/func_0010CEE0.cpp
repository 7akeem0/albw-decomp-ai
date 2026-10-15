#include "range.h"
extern HeapContext* data_00715210;
extern "C" HeapAllocation* func_0010DB90(HeapContext*);
void* operator new[](u32 size,HeapAllocation* heap,s32 alignment) throw(){
    if(!heap){heap=func_0010DB90(data_00715210);if(!heap)return 0;}
    return heap->allocate(size,alignment);
}
