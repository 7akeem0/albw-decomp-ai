#include "../../work7/gpt17/range.h"
struct Control {u16 current,max;u32 other,param;};
struct Obj {u8 pad[0x1c];u32 param;u8 padA[0x74-0x20];Control c1;u8 padB[0x8c-0x80];Control c2;};
extern void func_00231448(Control*);extern void func_002317C0(Control*,f32);
void configure(Control*c,u16 max,u16 current,u32 param){c->param=param;c->max=max;c->current=current;func_002317C0(c,1.f);}
void func_0044E0F0(Obj*p){func_00231448(&p->c1);configure(&p->c2,4,2,p->param);}
