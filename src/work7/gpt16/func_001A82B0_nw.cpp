#include "range.h"
extern f32 func_004F898C();extern void func_004F8964(f32*,bool,f32);extern  void func_0065A840(void*,s32);
void f_001A82B0(Obj1A82B*p){func_004F8964(&p->velocity.y,true,func_004F898C());CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_0065A840(&p->state,1);}
