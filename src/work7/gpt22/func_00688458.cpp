#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0037B310.
void*operator new(unsigned,void*,s32)throw();
struct Object_0037B310{u8 storage[0xe4];Object_0037B310(FactoryArg22*);};
Object_0037B310*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0037B310(p);}
