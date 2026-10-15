#include "range.h"
struct Obj {u8 pad[0x3d0];Vec3 pos;};extern void func_004E74E8(Vec3*,u32*,s32,s32);
void f_0030E5CC(Obj*p){u32 handle=0;for(s32 i=0;i<4;++i)func_004E74E8(&p->pos,&handle,0,-1);}
