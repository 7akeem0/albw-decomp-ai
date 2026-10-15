#include "range.h"
// Allocation0010CF28(size,heap,align); constructor003C49EC.
void*operator new(unsigned,void*,s32)throw();
struct Object_003C49EC{u8 storage[0x1f0];Object_003C49EC(FactoryArg22*);};
Object_003C49EC*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_003C49EC(p);}
