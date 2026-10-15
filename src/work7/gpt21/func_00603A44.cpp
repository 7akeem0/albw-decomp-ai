#include "range.h"
void* operator new(u32) throw();struct S{char pad[2616];S(void*);}; // S ctor=001B11F8

S* f_603A44(void*value){return new S(value);}
