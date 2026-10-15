#include "range.h"
struct Vec2{f32 x,y;Vec2(f32 a,f32 b):x(a),y(b){}};struct Out{u32 id;Vec2 value;};struct S{char pad[0x28];f32 value;char pad2c[0x40-0x2c];u32 id;};
inline void put(Out*out,u32 id,f32 a,f32 b){out->id=id;out->value=Vec2(a,b);}
void f_554E8C(const S*p,Out*out){put(out,p->id,p->value,0.0f);}
