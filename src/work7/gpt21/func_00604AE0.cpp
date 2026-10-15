#include "range.h"
void* operator new(u32) throw();struct S{char pad[3340];S(void*);}; // S ctor=0022CC80

S* f_604AE0(void*value){return new S(value);}
