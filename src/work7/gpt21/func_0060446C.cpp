#include "range.h"
void* operator new(u32) throw();struct S{char pad[1100];S(void*);}; // S ctor=001CF3D4

S* f_60446C(void*value){return new S(value);}
