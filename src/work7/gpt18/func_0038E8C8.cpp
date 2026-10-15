#include "range.h"
struct O{char pad[0xa4];u8 active;s8 a,b;};extern void func_0038E900(O*,s32,s32);void f(O*p){if(p->active){func_0038E900(p,p->a,p->b);p->active=0;p->a=0;p->b=0;}}
