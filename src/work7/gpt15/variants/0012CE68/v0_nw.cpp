#include "../../range.h"
struct Member{u32 data;};struct S{u8 pad[20];void*child;u8 q[80];Member m;u8 more[32];u8 flag;};extern void func_002C00A8(void*);
extern  void func_00656CA4(Member*,u32);
void func_0012CE68(S*p){p->flag=0;func_002C00A8(p->child);func_00656CA4(&p->m,0);}
