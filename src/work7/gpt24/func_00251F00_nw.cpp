#include "range.h"
struct State251F24{s32 count;void func_0065FCF8(s32);};
struct Obj251F24{char pad[0x3d0];Vec3_24 position;char pad3dc[0x4fc-0x3dc];State251F24 state;};
extern "C" void target(Obj251F24*p){State251F24&s=p->state;s32 n=s.count;if(n>45)p->position.y+=0.1f;if(n==60)s.func_0065FCF8(2);}
