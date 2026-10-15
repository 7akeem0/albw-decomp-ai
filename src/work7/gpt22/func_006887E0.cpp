#include "range.h"
// Allocation0010CF28(size,heap,align); constructor004A08BC.
void*operator new(unsigned,void*,s32)throw();
struct Object_004A08BC{u8 storage[0xc4];Object_004A08BC(FactoryArg22*);};
Object_004A08BC*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_004A08BC(p);}
