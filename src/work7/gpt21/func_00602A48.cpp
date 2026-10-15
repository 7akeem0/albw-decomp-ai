#include "range.h"
void* operator new(u32) throw();struct S{char pad[1212];S(void*);}; // S ctor=00137458

S* f_602A48(void*value){return new S(value);}
