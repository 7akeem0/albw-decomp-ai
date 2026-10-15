#include "range.h"
extern "C" void func_004FABDC(EnemyTail22*,s32,s32,s32);
extern "C" void func_004FAD90(EnemyTail22*);
inline void copy(Vec3*d,const Vec3&s){d->x=s.x;d->y=s.y;d->z=s.z;}
void target(EnemyTail22*p){for(s32 i=0;i<3;++i)(&p->vx)[i]=0;func_004FABDC(p,1,-1,0);p->max8e2=60;p->vy=0.8f;copy(&p->pos8bc,p->pos3d0);func_004FAD90(p);}
