#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0014CEE4.
void*operator new(unsigned,void*,s32)throw();
struct Object_0014CEE4{u8 storage[0x228];Object_0014CEE4(FactoryArg22*);};
Object_0014CEE4*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0014CEE4(p);}
