#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0029D43C.
void*operator new(unsigned,void*,s32)throw();
struct Object_0029D43C{u8 storage[0x158];Object_0029D43C(FactoryArg22*);};
Object_0029D43C*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0029D43C(p);}
