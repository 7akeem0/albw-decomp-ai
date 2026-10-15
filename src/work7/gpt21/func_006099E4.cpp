#include "range.h"
void* operator new(u32) throw();struct S{char pad[1080];S(void*);}; // S ctor=0038FC20

S* f_6099E4(void*value){return new S(value);}
