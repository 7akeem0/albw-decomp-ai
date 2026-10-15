#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0014B148.
void*operator new(unsigned,void*,s32)throw();
struct Object_0014B148{u8 storage[0xc0];Object_0014B148(FactoryArg22*);};
Object_0014B148*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0014B148(p);}
