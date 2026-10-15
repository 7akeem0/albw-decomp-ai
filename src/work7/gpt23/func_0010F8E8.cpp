#include "range.h"
void* operator new[](u32,HeapAllocation*,s32) throw();
extern "C" void func_001103B0(QueueBuffer*,u32*,s32);
extern "C" void func_0010F8E8(QueueOwner* p,s32 count,HeapAllocation* heap) {
    if(count>0) {
        p->allocation=new(heap,4)u32[count];
        func_001103B0(&p->queue,p->allocation,count);
    }
}
