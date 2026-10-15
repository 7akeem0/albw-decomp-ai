#include "../../range.h"
struct State{ void func_006572F8(s32);};struct S{u8 pad368[0x368];Vec3 a;u8 pad374[0x3d0-0x374];Vec3 b;u8 velocity[12];u32 angle;u8 pad3EC[0x418-0x3ec];State state;};
void func_0013C688(S*p,const Vec3&v,const u32&angle){p->a=v;p->b=v;p->angle=angle;p->state.func_006572F8(1);}

