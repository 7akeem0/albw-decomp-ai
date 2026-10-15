#include "range.h"
extern void func_004FC07C(ActorMotion*,int,int,int);
void f1ACB00(ActorMotion*p){for(int i=0;i<3;++i)(&p->velocity.x)[i]=0.0f;func_004FC07C(p,0,-1,0);}
