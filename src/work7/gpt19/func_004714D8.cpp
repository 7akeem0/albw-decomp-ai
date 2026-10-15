#include "range.h"
struct E {u8 pad[0x10];u32 flags;u8 gap[0x17C];};
struct G {u8 pad[0x10];E entries[1];};
struct S {u8 pad[0x70];u8 index;};
extern G* data_007124F0;
extern "C" void func_0012C718(S*);
extern "C" void f_004714D8(S* s){u32 i=s->index;E* entries=data_007124F0->entries;if(entries[i].flags&1)func_0012C718(s);}
