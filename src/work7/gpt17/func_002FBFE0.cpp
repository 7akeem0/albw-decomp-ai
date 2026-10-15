#include "range.h"
struct Obj {u8 pad[0x8e0];f32 a,b;u8 gap[0x90d-0x8e8];u8 flag;};
extern void func_004FABDC(Obj*,s32,s32,s32);
void f_002FBFE0(Obj*p){p->b=1.0f;p->a=1.0f;p->flag=0;func_004FABDC(p,1,-1,0);}
