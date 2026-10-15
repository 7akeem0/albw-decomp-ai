#include "range.h"
extern "C" void func_004FABDC(EnemyTail22*,s32,s32,s32);extern void*data_0070FB60;extern "C" void func_0028FCC8(void*);
void target(EnemyTail22*p){for(int i=0;i<3;i++)(&p->vx)[i]=0;func_004FABDC(p,3,-1,0);p->vy=0.3f;if(data_0070FB60)func_0028FCC8(data_0070FB60);}
