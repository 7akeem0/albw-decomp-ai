#include "range.h"
void* operator new(u32) throw();struct S{char pad[2456];S(void*);}; // S ctor=0021219C

S* f_604810(void*value){return new S(value);}
