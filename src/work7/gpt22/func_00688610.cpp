#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003C209C.
void*operator new(unsigned,void*,s32)throw();
struct Object_003C209C{u8 storage[0x1f0];Object_003C209C(FactoryArg22*);};
Object_003C209C*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003C209C(p);}
