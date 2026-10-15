#include "range.h"
void* operator new(u32) throw();struct S{char pad[2148];S(void*);}; // S ctor=001C3D30

S* f_603E10(void*value){return new S(value);}
