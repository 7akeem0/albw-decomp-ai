#include "range.h"
extern "C" void func_0010BFD4(RecursiveLock12*);
extern "C" void func_0010C0C0(RecursiveLock12* p) {
    u32 current;
    __asm { mrc p15,0,current,c13,c0,3 }
    u32 owner=p->owner;
    if(current!=owner) {
        func_0010BFD4(p);
        __asm { mrc p15,0,current,c13,c0,3 }
        p->owner=current;
    }
    ++p->count;
}
