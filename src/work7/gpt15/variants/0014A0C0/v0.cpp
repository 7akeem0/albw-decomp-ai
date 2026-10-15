#include "../../range.h"
struct S{u8 pad[24];void*child;u8 p[8];u32 value;u8 q[120];u8 flag;};extern void func_002569E0(void*);extern void func_0010C58C(S*,u32);
void func_0014A0C0(S*p){func_002569E0(p->child);func_0010C58C(p,p->value);p->flag=0;}
