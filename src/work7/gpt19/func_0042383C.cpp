#include "range.h"
struct A{char pad[0x16];Flag16 flags;};struct S{char pad[0x14];A* child;char gap[0x48];u32 sub;char gap2[0x80];s8 index;};extern void func_0031B348(void*,u32);
void f_0042383C(S*p){Flag16*f=&p->child->flags;f->set(0x40);if(p->index!=-1)func_0031B348(&p->sub,1);}
