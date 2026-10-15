#include "range.h"
void* operator new(u32) throw();struct S{char pad[2460];S(void*);}; // S ctor=0013BF0C

S* f_602E08(void*value){return new S(value);}
