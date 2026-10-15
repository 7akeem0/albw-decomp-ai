#include "range.h"
extern void func_001E5B90(void*,u32,Vec3,f32,f32);void call(void*p,u32 n,const Vec3&v,f32 rate,f32 height){func_001E5B90(p,n,v,height,rate);}void f240FD8(Obj240F*p){p->velocity.x=0;p->velocity.y=0;p->velocity.z=0;call(p,0,p->pos,0.008f,1.0f);}
