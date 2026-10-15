#include "range.h"
extern u32 func_00521184(void*);extern bool func_004FABDC(void*,u16,s32,bool);
void f_001639D4(Obj1639D*p){p->word=func_00521184(p);f32 z=0;p->velocity.x=z;p->velocity.z=z;p->flags.reset(128);p->flags.set(0x4000);func_004FABDC(p,15,-1,false);}
