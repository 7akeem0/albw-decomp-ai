#include "../range_types.h"
struct Control28BC{u16 current,max;u32 pad4,param;};
struct Obj28BC{char pad[0x1c];u32 param;char gap[0x60-0x20];Control28BC ctl;};
extern "C" void func_00231448(Control28BC*);
extern "C" void func_002317C0(Control28BC*,f32);
void configure28BC(Control28BC*c,u16 current,u16 max,u32 param){c->param=param;c->max=max;c->current=current;func_002317C0(c,1.f);}
void func_0028BCB0(Obj28BC*p){func_00231448(&p->ctl);configure28BC(&p->ctl,0,0,p->param);}
