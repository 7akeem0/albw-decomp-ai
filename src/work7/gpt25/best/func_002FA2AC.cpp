#include "../range_types.h"
struct Obj2FA2 {char pad[0x3dc];Vec3 velocity;};
extern "C" void func_004FABDC(Obj2FA2*,s32,s32,s32);
extern "C" void f_002FA2AC(Obj2FA2*p){func_004FABDC(p,6,-1,0);p->velocity.x=0.f;p->velocity.z=0.f;}
