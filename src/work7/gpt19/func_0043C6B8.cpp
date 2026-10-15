#include "range.h"
struct S{char pad[0x148];void* a;char gap[0xc];void* b;};extern void func_001B6C2C(void*);extern void func_00476CA0(void*,u32);extern void func_0043C6E4(S*);
void f_0043C6B8(S*p){if(p->a)func_001B6C2C(p->a);func_00476CA0(p->b,0);func_0043C6E4(p);}
