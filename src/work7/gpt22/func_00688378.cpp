#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0029DC7C.
void*operator new(unsigned,void*,s32)throw();
struct Object_0029DC7C{u8 storage[0xe0];Object_0029DC7C(FactoryArg22*);};
Object_0029DC7C*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0029DC7C(p);}
