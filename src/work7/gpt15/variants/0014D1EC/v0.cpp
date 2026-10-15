#include "../../range.h"
struct C{u8 pad[13];s8 a,b;};struct S{u8 pad[60];C*child;};extern void func_0012C718(C*);
void func_0014D1EC(S*p){C*c=p->child;if(c&&c->a==3&&c->b==3)func_0012C718(c);}
