#include "range.h"
void* operator new(u32) throw();
// Global operator new=10BAB4; S ctor=12ABB8.
struct S {char pad[0x980];S(void*);};
S* f_602938(void* value){return new S(value);}
