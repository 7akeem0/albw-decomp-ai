#include "range.h"
void* operator new(u32) throw();struct S{char pad[2748];S(void*);}; // S ctor=001E29C0

S* f_604654(void*value){return new S(value);}
