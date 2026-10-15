#include "range.h"
void* operator new(u32) throw();struct S{char pad[1260];S(void*);}; // S ctor=001D9E98

S* f_604514(void*value){return new S(value);}
