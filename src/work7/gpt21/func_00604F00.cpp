#include "range.h"
void* operator new(u32) throw();struct S{char pad[1204];S(void*);}; // S ctor=002403C4

S* f_604F00(void*value){return new S(value);}
