#include "range.h"
struct A{char pad[0x16];Flag16 flags;};struct S{char pad[0x14];A* child;char gap[0x20];Ctrl231 ctrl;};extern void func_00231448(Ctrl231*);extern void func_002C00A8(A*);
void f_0046A230(S*p){func_00231448(&p->ctrl);Flag16*f=&p->child->flags;f->reset(0x40);func_002C00A8(p->child);}
