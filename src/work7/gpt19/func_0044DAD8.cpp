#include "range.h"
struct S{char pad[0x18];u32 flags;char gap[0x110];void* child;};extern void func_00448FD0(void*);
void f_0044DAD8(S*p){if(p->child)func_00448FD0(p->child);p->flags&=~4u;}
