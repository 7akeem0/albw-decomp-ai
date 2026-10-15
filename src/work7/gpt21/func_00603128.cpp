#include "range.h"
void* operator new(u32) throw();struct S{char pad[4040];S(void*);}; // S ctor=0016169C

S* f_603128(void*value){return new S(value);}
