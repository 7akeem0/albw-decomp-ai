#include "range.h"
void* operator new(u32) throw();struct S{char pad[1080];S(void*);}; // S ctor=0023DB44

S* f_604D78(void*value){return new S(value);}
