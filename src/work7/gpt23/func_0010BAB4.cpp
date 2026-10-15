#include "range.h"
extern "C" HeapContext* data_00715210;
extern "C" HeapAllocation* func_0010DB90(HeapContext*);
void* operator new(u32 size,NoThrowTag) throw() {
    HeapAllocation* heap=func_0010DB90(data_00715210);
    if(heap) return heap->allocate(size,4);
    return 0;
}
