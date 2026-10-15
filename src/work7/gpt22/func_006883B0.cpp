#include "range.h"
// Allocation0010CF28(size,heap,align); constructor00323C94.
void*operator new(unsigned,void*,s32)throw();
struct Object_00323C94{u8 storage[0x2e4];Object_00323C94(FactoryArg22*);};
Object_00323C94*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_00323C94(p);}
