#include "range.h"
// Allocation0010CF28(size,heap,align); constructor001E31E8.
void*operator new(unsigned,void*,s32)throw();
struct Object_001E31E8{u8 storage[0xbc];Object_001E31E8(FactoryArg22*);};
Object_001E31E8*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_001E31E8(p);}
