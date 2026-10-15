#include "range.h"
void* operator new(u32) throw();struct S{char pad[2316];S(void*);}; // S ctor=00123768

S* f_602770(void*value){return new S(value);}
