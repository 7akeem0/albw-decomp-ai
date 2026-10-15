#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0025E6C0.
void*operator new(unsigned,void*,s32)throw();
struct Object_0025E6C0{u8 storage[0x150];Object_0025E6C0(FactoryArg22*);};
Object_0025E6C0*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0025E6C0(p);}
