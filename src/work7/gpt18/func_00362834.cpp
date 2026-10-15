#include "range.h"
struct S {u32 zero;u8 pad[12];s32 invalid;};struct O {u8 flag;u32 a,b;S sub;}; void init(S*s){s->zero=0;s->invalid=-1;}extern "C" void func_00362834(O*p){p->flag=0;p->a=0;p->b=0;init(&p->sub);}
