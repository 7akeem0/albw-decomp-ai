#include "range.h"
void* operator new(u32) throw();struct S{char pad[1500];S(void*);}; // S ctor=0028B220

S* f_6064A4(void*value){return new S(value);}
