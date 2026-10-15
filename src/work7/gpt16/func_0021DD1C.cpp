#include "range.h"
extern bool func_004FABDC(void*,u16,s32,bool);extern void func_004FB4E0(void*,f32);
void f_0021DD1C(ActorMotion*p){for(int i=0;i<3;++i)(&p->velocity.x)[i]=0;func_004FABDC(p,3,-1,false);func_004FB4E0(p,1);}
