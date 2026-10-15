#include "range.h"
struct Obj {u8 pad[0xb0];u32 ctl;};
extern void func_0036720C(u32*,s32,s32,s32,s32,bool,bool);
void f_0029C594(Obj*p){func_0036720C(&p->ctl,20,2,20,2,true,true);}
