#include "range.h"
struct Obj {u8 pad[8];s8 count;u8 gap[3];u32 state;s8 mode;};
extern  void func_00660BA4(u32*,s32);
void f_0026FB30(Obj*p){if(p->count<=0)return;if(p->mode!=1&&p->mode!=2)return;func_00660BA4(&p->state,3);}
