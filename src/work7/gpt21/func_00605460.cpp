#include "range.h"
void* operator new(u32) throw();struct S{char pad[1248];S(void*);}; // S ctor=00248370

S* f_605460(void*value){return new S(value);}
