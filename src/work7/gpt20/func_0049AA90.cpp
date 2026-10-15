#include "ladder_types.h"
struct O49AA {char pad0[0x68];void* a;void* b;char pad70[0x64];char subD4[0x50];u32 index;char pad128[0x14];void* entries[1];};
extern "C" void func_004964F8(void*,void*,void*,void*,u32,u32);
extern "C" void func_0049AA90(O49AA*p){func_004964F8(p->entries[p->index],p->subD4,p->a,p->b,0x500,0);}
