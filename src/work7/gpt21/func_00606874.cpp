#include "range.h"
void* operator new(u32) throw();struct S{char pad[3080];S(void*);}; // S ctor=002A752C

S* f_606874(void*value){return new S(value);}
