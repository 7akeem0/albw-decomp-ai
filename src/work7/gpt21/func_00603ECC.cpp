#include "range.h"
void* operator new(u32) throw();struct S{char pad[1240];S(void*);}; // S ctor=001C6690

S* f_603ECC(void*value){return new S(value);}
