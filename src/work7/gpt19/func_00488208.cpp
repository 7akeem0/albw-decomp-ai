#include "range.h"
struct A{char pad[0x44];u8 flags;};struct S{char pad[0x74];u32 state;char gap[0xd4];A* child;};extern void func_00428AB4(void*,u32);
void f_00488208(S*p){A*q=p->child;if(q){if(q->flags&1)q->flags&=0xfeu;func_00428AB4(&p->state,0);}}
