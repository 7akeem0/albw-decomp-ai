#include "range.h"
void* operator new(u32) throw();struct S{char pad[2500];S(void*);}; // S ctor=00213FC0

S* f_60487C(void*value){return new S(value);}
