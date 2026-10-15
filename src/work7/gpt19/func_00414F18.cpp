#include "range.h"
struct Owner14F18 {u8 data[0x20];u16 flags;u8 gap[0x48-0x22];f32 values[8];};
extern "C" void f_00414F18(Owner14F18*s,u32 i,f32 v){if(v<0.f)v=0.f;if(s->values[i]!=v){s->values[i]=v;s->flags|=8;}}
