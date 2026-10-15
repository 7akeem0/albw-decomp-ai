#include "../../range.h"
struct S{u8 pad[24];void*child;u32 value;u8 q[128];u8 flag;};extern void func_00109D6C(void*);extern void func_0010C58C(S*,u32);
void func_0014A0FC(S*p){func_00109D6C(p->child);func_0010C58C(p,p->value);p->flag=1;}
