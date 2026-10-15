#include "range.h"
void* operator new(u32) throw();struct S{char pad[1096];S(void*);}; // S ctor=00151B98

S* f_602FFC(void*value){return new S(value);}
