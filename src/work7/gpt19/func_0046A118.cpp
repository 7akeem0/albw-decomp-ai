#include "range.h"
struct A{char pad[0x16];Flag16 flags;};struct S{char pad[0x14];A* child;};extern void func_001B6D40(S*);extern void func_002C00A8(A*);
void f_0046A118(S*p){func_001B6D40(p);Flag16*f=&p->child->flags;f->reset(0x40);func_002C00A8(p->child);}
