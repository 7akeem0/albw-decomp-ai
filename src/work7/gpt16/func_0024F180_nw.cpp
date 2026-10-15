#include "range.h"
extern void func_0024F260(void*);extern void func_0065FA70(void*,s32);void f24F180(Obj24F1*p){func_0024F260(p);CounterPair t=p->timer;if(t.cur<t.max)p->timer.cur=t.cur+1;else func_0065FA70(&p->state,2);}
