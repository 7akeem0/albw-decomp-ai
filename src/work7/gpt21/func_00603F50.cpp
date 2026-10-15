#include "range.h"
void* operator new(u32) throw();struct S{char pad[1292];S(void*);}; // S ctor=001C9640

S* f_603F50(void*value){return new S(value);}
