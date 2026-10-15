// Fifth argument is a stack word read as float bits by the callee.
#include "range.h"
struct Obj {u8 pad[0x40c];void*model;u32 ctl;u8 gap[0x423-0x414];u8 flag;};
union FloatArg {f32 value;u32 bits;FloatArg(u32 v):bits(v){}};
extern void func_0014E2A0(Obj*,void*,u32*,u32,u32,void*);
void f_0026142C(Obj*p){p->flag=0;func_0014E2A0(p,p->model,&p->ctl,0x100,FloatArg(0).bits,0);}
