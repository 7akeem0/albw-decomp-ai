#include "range.h"
void* operator new(u32) throw();struct S{char pad[1232];S(void*);}; // S ctor=0023F414

S* f_604DF8(void*value){return new S(value);}
