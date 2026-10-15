#include "range.h"
struct Obj158F24{char pad[0x3dc];Vec3_24 velocity;};
extern float func_004F898C();
extern void func_004FABDC(Obj158F24*,s32,s32,u32);
extern "C" void target(Obj158F24*p){p->velocity.x=0;p->velocity.y=0;p->velocity.z=0;p->velocity.y=func_004F898C();func_004FABDC(p,3,0,0);}
