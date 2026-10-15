#include "range.h"
struct Obj1B2624{char pad[0x3dc];Vec3_24 velocity;};
extern void func_004FABDC(Obj1B2624*,s32,s32,u32);
extern void func_004FB4E0(Obj1B2624*,float);
extern "C" void target(Obj1B2624*p){const float&z=0.f;p->velocity.x=z;p->velocity.z=z;func_004FABDC(p,0,-1,0);func_004FB4E0(p,z);}
