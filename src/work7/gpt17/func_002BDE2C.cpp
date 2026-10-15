#include "range.h"
struct Obj {u8 pad[0x8bc];u32 state;u8 mode;};extern void func_00662A14(u32*,s32);extern void func_001507A8(Obj*,void*);
void f_002BDE2C(Obj*p,void*q){if(p->mode==4)func_00662A14(&p->state,5);func_001507A8(p,q);}
