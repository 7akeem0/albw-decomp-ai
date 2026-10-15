#include "range.h"
// operator new(unsigned, Heap*, s32) = 0x0010CF28; constructor = 0x0048FB4C.
struct Heap;void* operator new(unsigned,Heap*,s32) throw();
struct Object_0048FB4C{u8 data[0x24];Object_0048FB4C();};
Object_0048FB4C* target(void*,Heap* heap,s32 align){return new(heap,align) Object_0048FB4C;}
