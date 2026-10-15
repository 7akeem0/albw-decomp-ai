#include "range.h"
void* operator new(u32) throw();struct S{char pad[1096];S(void*);}; // S ctor=00246A50

S* f_605408(void*value){return new S(value);}
