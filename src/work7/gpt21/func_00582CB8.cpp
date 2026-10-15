#include "range.h"
struct Vec2{f32 x,y;};struct S{char pad[0xc];u32 id;Vec2 value;};
extern void func_00582CD0(void*,u32,Vec2);
void f_582CB8(S*p,void*out){Vec2 v=p->value;func_00582CD0(out,p->id,v);}
