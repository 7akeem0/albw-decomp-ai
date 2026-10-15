#include "range.h"
struct Child{u8 pad[0x508];s16 state;};
struct Obj{u8 pad[0x34];Child*child;};
extern void func_002B1644(Obj*,u32,u32);
extern void func_002B05F0(Obj*,u32,u32);
void f_002AD730(Obj*p,u32 n){if(p->child->state<=0)func_002B1644(p,16,(u8)n);else func_002B05F0(p,16,(u8)n);}
