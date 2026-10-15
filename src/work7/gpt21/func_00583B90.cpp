#include "range.h"
struct V{f32 x,y,z;V&operator=(const V&);};V&V::operator=(const V&s){x=s.x;y=s.y;z=s.z;return*this;}struct S{char pad[0x3d0];V pos;char gap[0x838-0x3dc];f32 offset;};void f_583B90(S*p,V*out){if(out){*out=p->pos;out->y+=p->offset;}}
