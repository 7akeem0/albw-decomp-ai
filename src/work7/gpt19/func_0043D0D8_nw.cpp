#include "range.h"
struct S{char pad[0x98];u32 state;char gap[0xbc];void* child;};extern void func_0043CE2C(S*);extern void func_0043D1D4(S*);extern void func_0047AF3C(void*);extern  void func_0066C424(void*,u32);
void f_0043D0D8(S*p){func_0043CE2C(p);func_0043D1D4(p);func_0047AF3C(p->child);func_0066C424(&p->state,8);}
