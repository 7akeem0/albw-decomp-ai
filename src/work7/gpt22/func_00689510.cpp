#include "range.h"
// operator new(unsigned, Heap*, s32) = 0x0010CF28; constructor = 0x004335D4.
struct Heap;void* operator new(unsigned,Heap*,s32) throw();
struct Object_004335D4{u8 data[0xec];Object_004335D4();};
Object_004335D4* target(void*,Heap* heap,s32 align){return new(heap,align) Object_004335D4;}
