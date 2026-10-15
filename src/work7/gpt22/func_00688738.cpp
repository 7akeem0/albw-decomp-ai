#include "range.h"
// Allocation0010CF28(size,heap,align); constructor00429DF4.
void*operator new(unsigned,void*,s32)throw();
struct Object_00429DF4{u8 storage[0x1f0];Object_00429DF4(FactoryArg22*);};
Object_00429DF4*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_00429DF4(p);}
