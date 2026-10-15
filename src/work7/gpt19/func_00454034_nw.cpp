#include "range.h"
struct A{char pad[0xd];u8 a,b;};struct S{char pad[0x74];u32 state;char gap[0x24];A* child;};extern  void func_0066D168(void*,u32);
void f_00454034(S*p){if(p->child->a==3 && p->child->b==3)func_0066D168(&p->state,1);}
