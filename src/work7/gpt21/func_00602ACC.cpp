#include "range.h"
void* operator new(u32) throw();struct S{char pad[1188];S(void*);}; // S ctor=0013A340

S* f_602ACC(void*value){return new S(value);}
