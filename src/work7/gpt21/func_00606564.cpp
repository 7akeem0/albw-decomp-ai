#include "range.h"
void* operator new(u32) throw();struct S{char pad[928];S(void*);}; // S ctor=002992E0

S* f_606564(void*value){return new S(value);}
