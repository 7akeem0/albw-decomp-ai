#include "range.h"
void* operator new(u32) throw();struct S{char pad[1100];S(void*);}; // S ctor=00323864

S* f_608020(void*value){return new S(value);}
