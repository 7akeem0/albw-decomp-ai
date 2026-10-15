#include "range.h"
extern f32 func_00521298(void*);extern void func_0065AAC8(void*,s32);union Bits{f32 f;s32 i;};void f001AAF08(Obj1AAF*p){Bits b;b.f=func_00521298(p);if(b.i<0x43c80000)func_0065AAC8(&p->state,1);}
