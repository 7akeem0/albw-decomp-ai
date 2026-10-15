#include "range.h"
struct Obj{u8 pad[0x9ac];u32 state;};
extern void func_004FABDC(Obj*,u32,s32,u32);
extern void func_0036B708(u32*);
void f_00267AB4(Obj*p){func_004FABDC(p,10,1,0);func_0036B708(&p->state);}
