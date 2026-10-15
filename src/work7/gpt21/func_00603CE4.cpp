#include "range.h"
void* operator new(u32) throw();struct S{char pad[1080];S(void*);}; // S ctor=001BED8C

S* f_603CE4(void*value){return new S(value);}
