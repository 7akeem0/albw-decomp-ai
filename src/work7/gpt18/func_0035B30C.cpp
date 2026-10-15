#include "range.h"
struct O{char pad[0x430];u32 arg;void* ctl;};extern void func_00169A80(void*);extern void func_00168E9C(void*,u32,s32);void f(O*p){func_00169A80(p->ctl);func_00168E9C(p->ctl,p->arg,0);}
