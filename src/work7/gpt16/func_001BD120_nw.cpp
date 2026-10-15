#include "range.h"
extern void func_0065B3E0(void*,s32);void f001BD120(Obj1BD0*p){CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_0065B3E0(&p->state,0);}
