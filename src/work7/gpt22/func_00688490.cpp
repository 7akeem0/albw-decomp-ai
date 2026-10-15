#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003A0528.
void*operator new(unsigned,void*,s32)throw();
struct Object_003A0528{u8 storage[0x2d8];Object_003A0528(FactoryArg22*);};
Object_003A0528*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003A0528(p);}
