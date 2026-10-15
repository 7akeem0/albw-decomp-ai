#include "range.h"
struct C{virtual void v0();virtual void v1();virtual void call(u32);};struct S{u32 m0;C*child;};
void f_56C508(S*p,u32 a){if(p->child)p->child->call(a);}
