#include "range.h"
extern  void func_00658228(void*,s32);extern Vec3*func_00520FC0(void*);extern void func_00159E10(void*,const Vec3*);
void f_00159BA8(Obj_00159BA8*p){CounterPair t=p->timer;if(t.cur<t.max)p->timer.cur=t.cur+1;else func_00658228(&p->state,1);func_00159E10(p,func_00520FC0(p));}
