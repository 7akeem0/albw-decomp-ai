#include "range.h"
void* operator new(u32) throw();struct S{char pad[1228];S(void*);}; // S ctor=0038923C

S* f_609898(void*value){return new S(value);}
