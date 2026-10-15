#include "range.h"
struct Limits{f32 x,y;Limits(){}Limits(f32 a,f32 b):x(a),y(b){}};
struct S{u8 data[0x10];u32 id;Limits limits;u8 first,second;S();};
extern "C"void sub_0040FA80(void*);
S::S(){sub_0040FA80(this);id=0;limits.x=0.f;limits.y=1.f;first=0;second=0;}