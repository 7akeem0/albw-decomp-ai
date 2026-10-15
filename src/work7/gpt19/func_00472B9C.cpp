#include "range.h"
struct S{char pad[0x18];u32 flags;char gap[0x58];u32 sub;};extern void func_001B6D40(S*);extern void func_0012C790(void*);
void f_00472B9C(S*p){func_001B6D40(p);func_0012C790(&p->sub);p->flags|=0x40;}
