#include "range.h"
extern void func_004FB024(void*);inline void start(Timer3*t,u32 n,f32 r){t->max=n;t->rate=r;t->cur=0;}void f163B50(Obj163B*p){p->velocity.x=0;p->velocity.z=0;p->timer.start(60);func_004FB024(p);}
