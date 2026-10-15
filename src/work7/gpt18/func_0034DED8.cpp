#include "range.h"
struct O{char pad[0x108];f32 value;char gap[0x22c-0x10c];u8 active,one,other;};extern void func_0036FA1C(void*,bool);void f(O*p){if(p->active){p->one=1;p->value=0.f;p->active=0;p->other=0;func_0036FA1C((char*)p+0x44,true);}}
