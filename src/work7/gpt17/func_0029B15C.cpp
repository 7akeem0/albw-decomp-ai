#include "range.h"
struct Obj {u8 pad[0x2d7];u8 flag;u8 pad2d8[0x430-0x2d8];CounterPair timer;};extern void func_00588C14(Obj*,s32,s32);
void f_0029B15C(Obj*p){CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00588C14(p,1,1);p->flag=1;}
