#include "range.h"
struct V1B5924{float x,y,z;V1B5924&operator=(const V1B5924&s);};
struct Obj1B5924{u32 a,b;V1B5924 spawn;char pad14[0x3d0-0x14];V1B5924 position;char pad3dc[0x8bc-0x3dc];u32 state;};
extern bool func_00588BF0(Obj1B5924*,s32);
extern void func_0065B29C(u32*,s32);
V1B5924&V1B5924::operator=(const V1B5924&s){x=s.x;y=s.y;z=s.z;return *this;}
extern "C" void target(Obj1B5924*p){if(func_00588BF0(p,0))func_0065B29C(&p->state,10);else p->position=p->spawn;}
