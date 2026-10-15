#include "range.h"
struct A{char pad[0x44];Ctrl231 ctrl;};struct S{char pad[0x9c];u32 count;char gap[0x98];A* child;};extern void func_002317C0(Ctrl231*,f32);
void f_00461B40(S*p){if(++p->count==60)func_002317C0(&p->child->ctrl,1.f);}
