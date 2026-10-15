#include "range.h"
struct S;struct A{char pad[12];S* owner;};struct S{A* child;};extern u32 func_0040DA2C(A*);extern void func_0040D9E4(A*);
void f_00407A8C(S*p,A*q){p->child=q;if(func_0040DA2C(p->child))func_0040D9E4(p->child);p->child->owner=p;}
