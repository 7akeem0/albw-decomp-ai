#include "range.h"
struct A{char pad[0xd];s8 a,b;};struct S{char pad[0x154];A* child;};extern void func_0044797C(A*);
void f_0043D634(S*p){A*q=p->child;if(q && q->a==3 && q->b==3)func_0044797C(q);}
