#include "range.h"
// operator new(unsigned, Heap*, s32) = 0x0010CF28; constructor = 0x00234700.
struct Heap;void* operator new(unsigned,Heap*,s32) throw();
struct Object_00234700{u8 data[0x120];Object_00234700();};
Object_00234700* target(void*,Heap* heap,s32 align){return new(heap,align) Object_00234700;}
