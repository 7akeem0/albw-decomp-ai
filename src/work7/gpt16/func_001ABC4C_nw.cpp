#include "range.h"
extern f32 func_00521298(void*);extern void func_0065AC0C(void*,s32);union Bits{f32 f;s32 i;};void f001ABC4C(ObjEnemy8BC*p){Bits b;b.f=func_00521298(p);if(b.i<=0x42c80000)func_0065AC0C(&p->state,3);}
