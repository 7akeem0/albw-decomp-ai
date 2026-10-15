#include "range.h"
void* operator new(u32) throw();struct S{char pad[1124];S(void*);}; // S ctor=001C811C

S* f_603F24(void*value){return new S(value);}
