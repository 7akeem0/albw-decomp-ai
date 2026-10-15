#include "range.h"
struct C{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual s32 get();};struct S{char pad[12];f32 scale;char gap[20];C*child;};
f32 f_56F43C(S* p){return p->child->get()*p->scale;}
