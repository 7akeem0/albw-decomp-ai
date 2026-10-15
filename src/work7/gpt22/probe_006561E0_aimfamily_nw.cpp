#include "range.h"
extern "C" void func_00115C70(Vec3*,const Vec3*,const Vec3*);
extern "C" s32 func_004904CC(f32,f32);
extern "C" bool func_0051D2F4(s32*,s32,f32,s32,s32);
extern "C" bool func_0058A8F0(EnemyAim22*);
extern "C" f32 func_004F944C();
extern "C" void func_00660AE4(StateControl22*,s32);
extern "C" void func_003931EC(StateControl22*,s32);
extern "C"  void func_00660B50(StateControl22*);
void target(EnemyAim22*p){Vec3 difference;func_00115C70(&difference,&p->targetPosition,&p->position);f32 x=difference.x;p->targetAngle=func_004904CC(x,difference.z);func_0051D2F4(&p->angle,p->targetAngle,.5f,0x16c16c1,0x4444444);if(func_0058A8F0(p)){p->vy=func_004F944C();func_00660AE4(&p->state,7);func_003931EC(&p->state,7);func_00660B50(&p->state);}}
