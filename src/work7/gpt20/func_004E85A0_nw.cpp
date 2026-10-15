#include "ladder_types.h"
struct O004E85A0{char pad0[0x3d0];Vec3 pos;char gap[256];char state[4];};
extern "C" bool func_00392E48(Vec3*,u32,u32,u32);
extern "C"  void func_0066AB60(void*,u32);
extern "C" void func_004E85A0(O004E85A0*p){if(!func_00392E48(&p->pos,1,0,0))func_0066AB60(p->state,4);else func_0066AB60(p->state,1);}
