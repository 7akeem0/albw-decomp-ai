#include "range.h"
void* operator new(u32) throw();struct S{char pad[1320];S(void*);}; // S ctor=001DB26C

S* f_604540(void*value){return new S(value);}
