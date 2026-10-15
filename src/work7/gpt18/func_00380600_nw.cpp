#include "range.h"
struct Counter{char pad[0x2a];u16 value;};struct O{char pad[0xb00];Counter timer;};extern void func_006678C0(void*,s32);void f(O*p){if(!p->timer.value)return;if(--p->timer.value)return;func_006678C0((char*)p+0xa48,1);}
