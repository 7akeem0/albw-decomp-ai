#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0034B60C.
void*operator new(unsigned,void*,s32)throw();
struct Object_0034B60C{u8 storage[0x2d4];Object_0034B60C(FactoryArg22*);};
Object_0034B60C*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0034B60C(p);}
