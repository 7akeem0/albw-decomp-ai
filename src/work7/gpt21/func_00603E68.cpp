#include "range.h"
void* operator new(u32) throw();struct S{char pad[2020];S(void*);}; // S ctor=001C57A0

S* f_603E68(void*value){return new S(value);}
