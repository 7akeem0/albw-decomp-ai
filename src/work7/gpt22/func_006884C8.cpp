#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003AA5D0.
void*operator new(unsigned,void*,s32)throw();
struct Object_003AA5D0{u8 storage[0x320];Object_003AA5D0(FactoryArg22*);};
Object_003AA5D0*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003AA5D0(p);}
