#include "range.h"
void* operator new(u32) throw();struct S{char pad[1096];S(void*);}; // S ctor=003183C0

S* f_607F04(void*value){return new S(value);}
