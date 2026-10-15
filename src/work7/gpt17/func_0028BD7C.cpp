#include "range.h"
struct Control {u16 current,max;u32 other,param;};struct Obj {u8 pad[0x1c];u32 param;u8 pad20[0x60-0x20];Control ctl;};extern void func_00231448(Control*);extern void func_002317C0(Control*,f32);
void configure(Control*c,u16 max,u16 current,u32 param){c->param=param;c->max=max;c->current=current;func_002317C0(c,1.f);}
void f_0028BD7C(Obj*p){func_00231448(&p->ctl);configure(&p->ctl,1,0,p->param);}
