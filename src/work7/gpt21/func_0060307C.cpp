#include "range.h"
void* operator new(u32) throw();struct S{char pad[2340];S(void*);}; // S ctor=001569E8

S* f_60307C(void*value){return new S(value);}
