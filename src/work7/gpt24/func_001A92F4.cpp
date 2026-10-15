#include "range.h"
struct Obj158C24{char pad[0x3d0];Vec3_24 pos,velocity;char pad3e8[0x8bc-0x3e8];u32 state;};
extern bool func_0058A8F0(Obj158C24*);
extern __weak void func_0065A984(u32*,s32);
extern void func_00115C54(Vec3_24*,const Vec3_24*,const Vec3_24*);
extern "C" void target(Obj158C24*p){if(func_0058A8F0(p))func_0065A984(&p->state,2);else{Vec3_24*d=&p->pos;func_00115C54(d,d,&p->velocity);}}
