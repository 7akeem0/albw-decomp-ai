#include "range.h"
struct C {virtual void v0();virtual void v1();virtual void v2();virtual s32 get();};
struct S {char pad[8];f32 scale;char padC[0x24-0xc];C*child;};
f32 f_56F3E4(S*p){return p->child->get()*p->scale;}
