#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003BC894.
void*operator new(unsigned,void*,s32)throw();
struct Object_003BC894{u8 storage[0x2fc];Object_003BC894(FactoryArg22*);};
Object_003BC894*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003BC894(p);}
