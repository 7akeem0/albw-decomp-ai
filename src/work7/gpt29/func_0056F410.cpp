#include "range.h"
struct V56F4{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual s32 value();};struct O56F4{char pad0[0xc];f32 scale;char pad10[0x14];V56F4*child;};
f32 f_0056F410(O56F4*p){return(f32)p->child->value()*p->scale;}
