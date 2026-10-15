#include "../../work7/gpt16/range.h"
extern f32 func_004F898C();extern void func_004F8964(f32*,bool,f32);extern  void func_00662F24(void*,s32);
void f_002C4ED8(Obj1A82B*p){func_004F8964(&p->velocity.y,true,func_004F898C());Vec3* v=&p->velocity;v->x=0.f;v->z=0.f;CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00662F24(&p->state,1);}
