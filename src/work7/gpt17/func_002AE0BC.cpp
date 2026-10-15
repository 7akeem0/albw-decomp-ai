#include "range.h"
struct Child{u8 pad[0x508];s16 state;};struct Obj{u8 pad[0x34];Child*child;void dispatch(u32 k,u32 n);};extern void func_002B1644(Obj*,u32,u32);extern void func_002B05F0(Obj*,u32,u32);
void dispatch(Obj*p,u32 k,u32 n){if(p->child->state<=0)func_002B1644(p,k,(u8)n);else func_002B05F0(p,k,(u8)n);}
void f_002AE0BC(Obj*p,u32 n){dispatch(p,15,n);}
