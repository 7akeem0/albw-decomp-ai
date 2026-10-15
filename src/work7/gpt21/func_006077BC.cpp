#include "range.h"
void* operator new(u32) throw();struct S{char pad[1260];S(void*);}; // S ctor=0030372C

S* f_6077BC(void*value){return new S(value);}
