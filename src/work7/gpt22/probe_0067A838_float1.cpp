#include "range.h"
struct S{u8 pad[0x10];f32 scale,offset;};struct R{u8 a,b,c;};extern "C" R*func_0067E150(S*);
f32 target(S*p){R*r=func_0067E150(p);f32 a=p->scale;f32 n=(u32)(r->b+(r->c<<8));f32 b=p->offset;return b+n*a;}
