#include "range.h"
struct Obj {u8 pad[0x40c];u32 state;u8 gap[0x430-0x410];CounterPair timer;};
extern  void func_00661990(u32*,s32);
void f_0029A82C(Obj*p){if(p->timer.step())return;func_00661990(&p->state,3);}
