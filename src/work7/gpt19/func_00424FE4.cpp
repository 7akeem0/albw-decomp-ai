#include "range.h"
struct A{char pad[0x16];Flag16 flags;};struct S{char pad[0x14];A* child;char gap[0x30];Ctrl231 ctrl;};extern void func_002C00A8(A*);extern void func_002313DC(Ctrl231*);
void f_00424FE4(S*p){func_002C00A8(p->child);Flag16*f=&p->child->flags;f->reset(0x40);func_002313DC(&p->ctrl);}
