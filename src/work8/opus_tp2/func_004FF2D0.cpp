#include "../../work6/gpt13/en218.h"
#include "../../work6/gpt13/atan.h"
struct Angle{s32 v;Angle(s32 n):v(n){}};struct Hit{u32 m0;Vec3 v;};struct Obj{char p[0x8e4];s32 ang;char p8e8[0x910-0x8e8];u8 hit;};
void func_004F4A68(Obj*,const Hit&);
Angle angleSub(Angle a,Angle b){return Angle(a.v-b.v);}
inline f32 Abs(f32 v){return v>0.f?v:-v;}
s32 sum(s32 a,s32 b){return a+b;}
void func_004FF2D0(Obj*o,const Hit&h){f32 ay=Abs(h.v.y);if(ay<.4f){o->ang=atan2Idx(h.v.x,h.v.z);o->hit=1;}func_004F4A68(o,h);}
