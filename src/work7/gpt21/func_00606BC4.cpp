#include "range.h"
void* operator new(u32) throw();struct S{char pad[1168];S(void*);}; // S ctor=002C8598

S* f_606BC4(void*value){return new S(value);}
