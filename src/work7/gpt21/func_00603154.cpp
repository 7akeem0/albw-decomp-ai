#include "range.h"
void* operator new(u32) throw();struct S{char pad[2340];S(void*);}; // S ctor=00164284

S* f_603154(void*value){return new S(value);}
