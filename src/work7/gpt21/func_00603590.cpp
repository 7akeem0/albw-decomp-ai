#include "range.h"
void* operator new(u32) throw();struct S{char pad[3064];S(void*);}; // S ctor=00181EF0

S* f_603590(void*value){return new S(value);}
