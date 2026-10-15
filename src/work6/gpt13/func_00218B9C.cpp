#include "en218.h"
#include "atan.h"
struct Angle{s32 v;Angle(s32 n):v(n){}};struct Hit{u32 m0;Vec3 v;};struct Obj{char p[0x8f4];s32 a,b;u8 hit;};
void func_004F4A68(Obj*,const Hit&);
Angle angleSub(Angle a,Angle b){return Angle(a.v-b.v);}
inline f32 Abs(f32 v){return v>0.f?v:-v;}
void func_00218B9C(Obj*o,const Hit&h){f32 ay=Abs(h.v.y);if(ay<.4f){s32 a=atan2Idx(h.v.x,h.v.z);s32 d=angleSub(a,o->a+0x80000000).v;if(d>-(s32)0x40000000&&d<(s32)0x40000000){s32 next=(d+o->a)+(d+0x80000000);o->hit=1;o->b=next;}}func_004F4A68(o,h);}
