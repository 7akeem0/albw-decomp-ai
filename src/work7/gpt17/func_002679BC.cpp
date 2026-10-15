#include "range.h"
struct Obj{u8 pad[0x990];f32 value;u8 pad994[0x14];u32 timer;};
extern void func_004FABDC(Obj*,u32,s32,u32);
void f_002679BC(Obj*p){p->timer=0;p->value=0.0f;func_004FABDC(p,15,-1,0);}
