#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0048D41C.
void*operator new(unsigned,void*,s32)throw();
struct Object_0048D41C{u8 storage[0xdc];Object_0048D41C(FactoryArg22*);};
Object_0048D41C*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0048D41C(p);}
