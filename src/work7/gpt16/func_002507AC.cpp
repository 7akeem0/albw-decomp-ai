#include "range.h"
extern void func_002507E0(void*);extern void func_0024FED0(void*); void impl(Obj2507S*p,s32 n,Sub2507*s){if(s->kind!=n)return;if(s->flag){p->sub.done=1;func_002507E0(p);}else func_0024FED0(p);}void f2507AC(Obj2507S*p,s32 n){impl(p,n,&p->sub);}
