#include "range.h"
struct FloatArray3 {f32 a[3];f32&at(u32);};struct Obj {u8 pad[0x8ec];FloatArray3 pos;u8 gap[0x9c4-0x8f8];FloatArray3 other;};
f32&FloatArray3::at(u32 i){f32*p=a;if(i<3)p=&a[i];return*p;}void set(Obj*p,f32 v,u32 i){if(i<3)p->pos.at(i)=v;else {u32 n=i-3;p->other.at(n)=v;}}void f_00328FC8(Obj*p,const f32&v,u32 i){set(p,v,i);}
