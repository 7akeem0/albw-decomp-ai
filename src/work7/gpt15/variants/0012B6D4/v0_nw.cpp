#include "../../range.h"
extern "C" void func_004FB064(void*);extern "C" void func_004FB0D8(void*,f32*);extern "C"  void func_00656B60(void*,s32);
struct S{u8 pad3DC[0x3dc];Vec3 velocity;u8 pad3E8[0x8bc-0x3e8];s32 state;};extern "C" void func_0012B6D4(S*p){func_004FB064(p);p->velocity.y-=0.01f;func_004FB0D8(p,&p->velocity.y);if(p->state>=150)func_00656B60(&p->state,3);}
