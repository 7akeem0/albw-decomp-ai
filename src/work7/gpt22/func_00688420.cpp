#include "range.h"
// Allocation0010CF28(size,heap,align); constructor0037AD48.
void*operator new(unsigned,void*,s32)throw();
struct Object_0037AD48{u8 storage[0x1ec];Object_0037AD48(FactoryArg22*);};
Object_0037AD48*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object_0037AD48(p);}
