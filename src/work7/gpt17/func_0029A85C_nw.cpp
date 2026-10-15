#include "range.h"
struct Obj{u8 pad0[0x40C];s32 state;u8 pad410[0x51];u8 flag;};
extern  void func_00661990(s32*,s32);
void f_0029A85C(Obj*p){if(p->flag==0)return;func_00661990(&p->state,2);}
