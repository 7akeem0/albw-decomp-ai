#include "range.h"
void* operator new(u32) throw();struct S{char pad[2344];S(void*);}; // S ctor=00203918

S* f_604760(void*value){return new S(value);}
