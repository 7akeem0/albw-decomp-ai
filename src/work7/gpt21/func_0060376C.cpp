#include "range.h"
void* operator new(u32) throw();struct S{char pad[1096];S(void*);}; // S ctor=001940B4

S* f_60376C(void*value){return new S(value);}
