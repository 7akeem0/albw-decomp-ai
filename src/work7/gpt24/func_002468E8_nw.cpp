#include "range.h"
struct Object2468 {char pad[0x368];Vec3_24 a;char pad374[0x3d0-0x374];Vec3_24 b;char pad3dc[0x414-0x3dc];u32 state;};
extern void func_0065F41C(void*,s32) ;
void target(Object2468*p,const Vec3_24&v){copyVecValue24(&p->a,v);copyVecValue24(&p->b,v);func_0065F41C(&p->state,1);}
