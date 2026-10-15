#include "range.h"
struct S;struct A{char pad[8];S* owner;};struct S{A* child;};extern u32 func_0040D9EC(A*);extern void func_00407A1C(A*);
void f_00407A60(S*p,A*q){p->child=q;if(func_0040D9EC(p->child))func_00407A1C(p->child);p->child->owner=p;}
