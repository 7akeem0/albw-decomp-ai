#include "range.h"
void* operator new(u32) throw();struct S{char pad[2008];S(void*);}; // S ctor=0023E834

S* f_604DA4(void*value){return new S(value);}
