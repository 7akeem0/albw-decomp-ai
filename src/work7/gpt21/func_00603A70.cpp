#include "range.h"
void* operator new(u32) throw();struct S{char pad[2380];S(void*);}; // S ctor=001B3C90

S* f_603A70(void*value){return new S(value);}
