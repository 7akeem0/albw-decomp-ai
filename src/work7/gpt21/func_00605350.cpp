#include "range.h"
void* operator new(u32) throw();struct S{char pad[2532];S(void*);}; // S ctor=0024550C

S* f_605350(void*value){return new S(value);}
