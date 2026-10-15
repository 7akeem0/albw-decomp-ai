#include "range.h"
void* operator new(u32) throw();struct S{char pad[1108];S(void*);}; // S ctor=001C2280

S* f_603DE4(void*value){return new S(value);}
