#include "range.h"
struct Obj {u8 pad[0x2a04];f32 value;};
inline f32 clamp(f32 v,f32 lo,f32 hi){if(v<lo)v=lo;else if(v>hi)v=hi;return v;}
void f_002C0AB4(Obj*p,f32 v){p->value=clamp(v,0.f,1.f);}
