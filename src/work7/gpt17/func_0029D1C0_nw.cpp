#include "range.h"
struct Child {u8 pad[0x48];u32 state;u8 kind;};struct Obj {u8 pad[0xec];Child*child;};
extern void*data_007142B0;extern void func_006600C4(u32*,s32);extern void func_002DFC2C(void*);
void f_0029D1C0(Obj*p){Child*c=p->child;if(c->kind==2)func_006600C4(&c->state,3);func_002DFC2C(data_007142B0);}
