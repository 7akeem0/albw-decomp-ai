#include "range.h"
struct A{u8 pad[0x10];};struct B{u8 bytes[0x128];};struct D:A,B{D();};void*operator new(unsigned,void*,s32)throw();B*target(void*,void*heap,s32 align){return new(heap,align)D;}
// Allocation0010CF28 takes size,Heap*,alignment; D ctor0025C060.
