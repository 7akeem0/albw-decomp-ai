#include "ladder_types.h"
struct O49AAC8 {char pad0[0x60];u32 a;u32 b;char pad68[0x6c];char subD4[0x50];u32 index;char pad128[8];void* entries[1];};
extern "C" void func_004964F8(void*,void*,u32,u32,u32,u32);
extern "C" void func_0049AAC8(O49AAC8*p){func_004964F8(p->entries[p->index],p->subD4,p->a,p->b,0x500,0);}
