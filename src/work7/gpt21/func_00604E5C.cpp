#include "range.h"
void* operator new(u32) throw();struct S{char pad[1100];S(void*);}; // S ctor=0023FAD4

S* f_604E5C(void*value){return new S(value);}
