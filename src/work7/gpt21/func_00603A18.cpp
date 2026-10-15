#include "range.h"
void* operator new(u32) throw();struct S{char pad[2532];S(void*);}; // S ctor=001AF0AC

S* f_603A18(void*value){return new S(value);}
