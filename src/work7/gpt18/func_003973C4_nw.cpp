#include "range.h"
struct O{char pad[0x38];void*a,*b;};extern void func_004CF478(void*,bool,u32);extern void func_0066819C(void*,s32);void f(O*p){func_004CF478(p->a,false,0);func_004CF478(p->b,false,0);func_0066819C((char*)p+0x10,0);}
