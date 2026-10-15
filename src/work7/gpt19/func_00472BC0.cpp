#include "range.h"
struct S{char pad[0x18];u32 flags;char gap[0x58];u32 sub;};extern void func_00167244(S*);extern void func_0012C790(void*);
void f_00472BC0(S*p){func_00167244(p);func_0012C790(&p->sub);p->flags|=0x40;}
