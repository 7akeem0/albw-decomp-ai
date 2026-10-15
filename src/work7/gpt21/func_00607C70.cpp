#include "range.h"
void* operator new(u32) throw();struct S{char pad[2500];S(void*);}; // S ctor=0030F21C

S* f_607C70(void*value){return new S(value);}
