#include "range.h"
void* operator new(u32) throw();struct S{char pad[2396];S(void*);}; // S ctor=0012507C

S* f_602814(void*value){return new S(value);}
