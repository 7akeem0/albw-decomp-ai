#include "../../range.h"
struct C{u8 pad[13];s8 a,b;};struct S{u8 pad[52];C*child;};extern void func_0044399C(C*,u32,u32);
void func_0014D218(S*p,u32 a,u32 b){C*c=p->child;if(c&&c->a==0&&c->b==0)func_0044399C(c,a,b);}
