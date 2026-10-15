#include "range.h"
struct S{char pad[0x30];u8 flag;char gap[0x57];u32 sub;};
extern u32* func_0041F3C0(S*,u32*,const u32*,u32,u32);
u32* f_0041F6CC(S*p,u32*out){u32*end=func_0041F3C0(p,out,&p->sub,9,p->flag);p->flag=0;return end;}
