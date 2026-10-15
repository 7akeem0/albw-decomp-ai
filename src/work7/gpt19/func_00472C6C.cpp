#include "range.h"
struct S{char pad[0x18];u32 flags;char gap[0x58];u32 sub;};extern void func_001B6B38(void*);extern void func_001B6DE0(S*);
void f_00472C6C(S*p){func_001B6B38(&p->sub);p->flags&=~0x40u;func_001B6DE0(p);}
