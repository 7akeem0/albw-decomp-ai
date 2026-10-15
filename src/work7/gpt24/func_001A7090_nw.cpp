#include "range.h"
struct Obj1A7024{char pad[0x3dc];Vec3_24 velocity;char pad3e8[0x8bc-0x3e8];u32 state;};
extern float func_004F898C();
extern void func_004F8964(float*,bool,float);
extern bool func_0058A8F0(Obj1A7024*);
extern  void func_0065A840(u32*,s32);
extern "C" void target(Obj1A7024*p){func_004F8964(&p->velocity.y,true,func_004F898C());if(func_0058A8F0(p))func_0065A840(&p->state,5);}
