#include "range.h"
extern void func_00658604(void*,u32);void f163378(Obj1633*p){CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00658604(&p->state,1);}