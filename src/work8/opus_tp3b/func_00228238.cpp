#include "../../work6/gpt13/en218.h"
#include "../../work6/gpt13/atan.h"
struct Angle{s32 v;Angle(s32 n):v(n){}};struct Hit{u32 m0;Vec3 v;u8 p10[0x10];u16 m20;};struct Obj{char p[0x6a4];Angle a;s32 b;char p6ac[0x749-0x6ac];u8 hit;};
bool func_001507A8(Obj*,const Hit&);
Angle angleSub(Angle a,Angle b){return Angle(a.v-b.v);}
inline f32 Abs(f32 v){return v>0.f?v:-v;}
s32 sum(s32 a,s32 b){return a+b;}
bool func_00228238(Obj*o,const Hit&h){f32 ay=Abs(h.v.y);if(ay<.4f){if((h.m20&0x1f)!=6)return false;s32 a=atan2Idx(h.v.x,h.v.z);s32 d=angleSub(a,o->a.v+0x80000000).v;if(d>-(s32)0x40000000&&d<(s32)0x40000000){s32 next=sum(d+0x80000000,d+o->a.v);o->hit=1;o->b=next;}}return func_001507A8(o,h);}
