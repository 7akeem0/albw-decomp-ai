#include "range.h"
struct S {u8 pad[0x74];u32 state;u8 gap[0x440];u16 counter;};
extern "C"  void func_0066CB14(void*,s32);
extern "C" void f_00445250(S* s){++s->counter;if(s->counter<60)return;func_0066CB14(&s->state,1);}
