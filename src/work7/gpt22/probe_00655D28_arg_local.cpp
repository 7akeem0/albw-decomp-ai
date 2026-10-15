#include "range.h"
extern "C" const Vec3*func_00520FC0(EnemyTail22*);
extern "C" void func_00115C70(Vec3*,const Vec3&,const Vec3&);
extern "C" s32 func_004904CC(f32,f32);
struct Far{u8 pad[0xcc];f32 value;u8 padD0[8];s32 angle;};
void zeroXZ(EnemyTail22*p){p->vx=0;p->vz=0;}
void target(EnemyTail22*p){zeroXZ(p);Far*t=(Far*)((u8*)p+0x800);t->value=0.3f;p->angle8dc=0;p->vy=0.3f;Vec3 d;func_00115C70(&d,*func_00520FC0(p),p->pos3d0);f32 x=d.x;f32 z=d.z;t->angle=func_004904CC(x,z);}
