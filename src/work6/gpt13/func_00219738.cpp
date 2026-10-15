#include "en218.h"
struct Global{char p[0x340];u32 flags;};extern Global* data_007124F0;
struct Obj{char p[0x8e6];u16 m8e6;char p8e8[4];u8 m8ec;};
void func_00219738(Obj*o){int n=0;u32 f=data_007124F0->flags;if(f&1)n++;if(f&2)n++;if(f&16)n++;if(f&0x2000)n++;if(f&0x4000)n++;if(f&0x10000)n++;if(f&0x20000)n++;if(f&0x40000)n++;if(f&0x80000)n++;if(f&0x100000)n++;if(f&0x200000)n++;if(f&0x400000)n++;if(f&0x800000)n++;o->m8ec=n!=0;o->m8e6+=n;}
