#include "range.h"
void* operator new(u32) throw();struct S{char pad[2408];S(void*);}; // S ctor=001AB038

S* f_6039EC(void*value){return new S(value);}
