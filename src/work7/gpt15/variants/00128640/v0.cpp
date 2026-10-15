#include "../../range.h"
extern void func_004FABDC(ActorMotionFlags*,u32,s32,u32);
void func_00128640(ActorMotionFlags*p){p->flags.set(0x20);func_004FABDC(p,0,-1,0);p->word8EC=0;}
