#include "range.h"
struct OE9E {u8 pad[0x64];u32 value;u8 gap[2];u8 flag;};
struct PE9E {u8 pad[0x970];void*a;u8 gap[0xa48-0x974];void*b;};
extern "C" void func_004CF478(void*,u32,u32);
extern "C" void func_0036E9E0(OE9E*p,PE9E*q){p->value=0;func_004CF478(p->flag?q->a:q->b,1,0);}
