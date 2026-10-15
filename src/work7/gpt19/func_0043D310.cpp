#include "range.h"
struct A{char pad[0xd];s8 a,b;};struct S{char pad[0x154];A* child;};extern void func_00446C4C(A*);
void f_0043D310(S*p){A*q=p->child;if(q && q->a==3 && q->b==3)func_00446C4C(q);}
