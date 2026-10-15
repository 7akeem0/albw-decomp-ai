#include "range.h"
struct Object19BE {char pad[0x410];u32 id;char pad414[0x464-0x414];Vec3_24 pos;};
extern void func_0014E2A0(Object19BE*,u32,const Vec3_24*,u32,u32,u32);
void target(Object19BE*p){func_0014E2A0(p,p->id,&p->pos,0x100,0,0);}
