#include "../../range.h"
struct C{u8 pad[13];s8 a,b;};struct S{u8 pad[60];C*child;};extern void func_0047EFA8(C*,u32);void func_0014D1C0(S*p,u32 v){C*c=p->child;if(c&&c->a==3&&c->b==3)func_0047EFA8(c,v);}
