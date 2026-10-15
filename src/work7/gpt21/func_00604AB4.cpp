#include "range.h"
void* operator new(u32) throw();struct S{char pad[1880];S(void*);}; // S ctor=00228D18

S* f_604AB4(void*value){return new S(value);}
