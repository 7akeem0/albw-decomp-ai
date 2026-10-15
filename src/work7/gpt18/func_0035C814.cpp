#include "range.h"
struct V{f32 x,y,z;void zero(){for(s32 i=0;i<3;++i)(&x)[i]=0.f;}};struct O{u8 p[0x397];u8 flags;u8 q[0x44];V vel;};extern "C" void func_0035C814(O*p){p->vel.zero();p->flags|=1;}
