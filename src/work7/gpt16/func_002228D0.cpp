#include "range.h"
extern void func_002227F4(Obj2228*,u32,u32);
u32 childval(Child2228*p){if(p->dead)return *p->value;else return *p->value;}void f2228D0(Obj2228*p,u32 n,u32 a){if(p->child&&childval(p->child)!=n)func_002227F4(p,n,a);}
