#include "range.h"
extern void func_0065C1CC(void*,s32);void f001C960C(Obj1C8D*p){CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_0065C1CC(&p->state,2);}
