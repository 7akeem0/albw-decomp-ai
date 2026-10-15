#include "../../range.h"
extern "C" void func_00115154(f32*,f32*,u32);struct Pair{f32 y,z;Pair(f32 a,f32 b):y(a),z(b){}};struct First{f32 x,y;u32 cosBits;};struct Second{u32 cosBits;Pair yz;};struct S{u8 pad374[0x374];First first;Second second;u8 pad38C[0x3e8-0x38c];u32 angle;};extern "C" void func_0014EB3C(S*p){f32 sine,cosine;func_00115154(&sine,&cosine,p->angle);u32 bits=*(const u32*)&cosine;p->first.x=sine;p->first.y=0.0f;p->first.cosBits=bits;p->second.cosBits=bits;p->second.yz=Pair(0.0f,-sine);}

