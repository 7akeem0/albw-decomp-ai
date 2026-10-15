#include "../../range.h"
struct Angle30{s32 value;Angle30(s32 n):value(n){}};
struct ActorAim30 {
    u8 pad0[0x3d0];Vec3 position;Vec3 velocity;
    u8 pad3e8[0x8cc-0x3e8];f32 speed;
    u8 pad8d0[8];Angle30 angle;u32 count;
};
extern "C" Vec3* func_00520FC0(ActorAim30*);
extern "C" void func_00115C70(Vec3*,const Vec3&,const Vec3&);
extern "C" s32 func_004904CC(f32,f32);
inline void clear(Vec3*v){v->x=0.f;v->z=0.f;}
s32 direction(const Vec3&v){f32 x=v.x;f32 z=v.z;return func_004904CC(x,z);}
void target(ActorAim30*p){clear(&p->velocity);p->speed=.3f;p->count=0;p->velocity.y=p->speed;Vec3 difference;func_00115C70(&difference,*func_00520FC0(p),p->position);p->angle=Angle30(direction(difference));}
