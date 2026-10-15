#include "../range_types.h"
struct Obj2631{char pad[0x3dc];Vec3 velocity;};
extern "C" void func_004FABDC(Obj2631*,s32,s32,s32);
extern "C" void func_004FB4E0(Obj2631*,f32);
void func_002631E4(Obj2631*p){p->velocity.x=0.f;p->velocity.z=0.f;func_004FABDC(p,2,-1,0);func_004FB4E0(p,1.f);}
