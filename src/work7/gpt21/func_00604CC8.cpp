#include "range.h"
void* operator new(u32) throw();struct S{char pad[1252];S(void*);}; // S ctor=0023B2F0

S* f_604CC8(void*value){return new S(value);}
