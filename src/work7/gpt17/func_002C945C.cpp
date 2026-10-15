#include "range.h"
struct Obj {u8 pad[0x438];void*model;u8 gap[0x458-0x43c];u32 ctl;};
// Fifth argument is zero float bits carried in a raw stack word.
extern void func_0014E2A0(Obj*,void*,u32*,u32,u32,void*);
void f_002C945C(Obj*p){func_0014E2A0(p,p->model,&p->ctl,0x1000,0,0);}
