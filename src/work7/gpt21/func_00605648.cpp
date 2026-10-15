#include "range.h"
void* operator new(u32) throw();struct S{char pad[2256];S(void*);}; // S ctor=00252C84

S* f_605648(void*value){return new S(value);}
