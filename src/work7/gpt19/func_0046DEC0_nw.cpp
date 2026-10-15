#include "range.h"
struct A{char pad[0x3c];u8 active;};struct S{char pad[0x74];u32 state;char gap[0x30];A* child;};extern  void func_0066E1C0(void*,u32);
void f_0046DEC0(S*p){if(!p->child->active)func_0066E1C0(&p->state,0);}
