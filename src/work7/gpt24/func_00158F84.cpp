#include "range.h"
struct Obj158F8424{char pad[0x3dc];Vec3_24 velocity;u32 angle;char pad3ec[0x59c-0x3ec];Flag32_24 flags;};
extern void func_004D80A4(Vec3_24*,u32,float);
extern float func_004F898C();
extern bool func_004FABDC(Obj158F8424*,s32,s32,u32);
extern "C" void target(Obj158F8424*p){func_004D80A4(&p->velocity,p->angle,0.03f);p->velocity.y=func_004F898C();func_004FABDC(p,2,-1,0);p->flags.set(128);}
