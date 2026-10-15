#include "range.h"
struct Obj{u8 pad[0x3dc];Vec3 velocity;};
extern void func_004FABDC(Obj*,u32,s32,u32);
void f_00263220(Obj*p){func_004FABDC(p,7,-1,0);p->velocity.x=0.0f;p->velocity.z=0.0f;}
