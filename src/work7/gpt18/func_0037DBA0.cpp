#include "range.h"
struct O{char pad[0x40c];void*child;u32 word410;char gap[12];u32 flag;};extern void func_0014E2A0(O*,void*,u32*,u32,u32,u32);void f(O*p){if(p->flag)return;func_0014E2A0(p,p->child,&p->word410,256,0,0);}
