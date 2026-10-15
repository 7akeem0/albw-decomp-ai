#include "range.h"
extern void func_004FC07C(Object1B2A_24*,s32,s32,u32);
void target(Object1B2A_24*p){p->state=0;for(s32 i=0;i<3;++i)(&p->velocity.x)[i]=0.0f;func_004FC07C(p,6,-1,0);}
