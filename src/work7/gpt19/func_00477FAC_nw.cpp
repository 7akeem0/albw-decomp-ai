#include "range.h"
struct S{char pad[0xf0];u32 state;char gap[0x100];void* a;void* b;};extern void func_0012C790(void*);extern  void func_0066E7A0(void*,s8);
void f_00477FAC(S*p){func_0012C790(p->a);func_0012C790(p->b);func_0066E7A0(&p->state,16);}
