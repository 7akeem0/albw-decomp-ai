#include "range.h"
struct Box433{Vec3 min,max;};
struct Owner433{u32 a;Vec3 center;u8 gap10[0x24];Box433 box;u8 gap4c[12];Vec2 size;u32 gap60;Vec2 half;};
extern "C"  void func_0068B294(Box433*,const Vec3*,f32,f32,f32);
void func_00433694(Owner433*p){Vec2 size=p->size;p->half.x=size.x*0.5f;p->half.y=size.y*0.5f;func_0068B294(&p->box,&p->center,size.x,size.y,size.x);}
