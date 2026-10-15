#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003AF0E4.
void*operator new(unsigned,void*,s32)throw();
struct Object_003AF0E4{u8 storage[0x1f0];Object_003AF0E4(FactoryArg22*);};
Object_003AF0E4*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003AF0E4(p);}
