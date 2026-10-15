#include "range.h"
// Allocation0010CF28(size,heap,align); constructor00518CCC.
void*operator new(unsigned,void*,s32)throw();
struct Object_00518CCC{u8 storage[0xbc];Object_00518CCC(FactoryArg22*);};
Object_00518CCC*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_00518CCC(p);}
