#include "range.h"
struct O{u8 pad[0x1c];f32 value;u8 gap[8];u8 interp[0x18];f32 a,b;};extern void func_0010C7F8(void*,s32,f32);void f2570F0(O*p){f32 z=0;func_0010C7F8(p->interp,0,z);p->a=z;p->b=z;p->value=z;}
