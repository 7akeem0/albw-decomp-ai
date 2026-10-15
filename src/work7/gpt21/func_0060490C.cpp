#include "range.h"
void* operator new(u32) throw();struct S{char pad[2312];S(void*);}; // S ctor=0021807C

S* f_60490C(void*value){return new S(value);}
