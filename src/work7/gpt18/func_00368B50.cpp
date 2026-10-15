#include "range.h"
struct E{char pad[0x148];};struct O{char pad[0xa4];s32 count;E*data;};extern void func_003B62F0(E*,void*);void f(O*p,s32 i,void*q){if(i>=0&&i<p->count){E*e=p->data;if((u32)i<(u32)p->count)e=&p->data[i];func_003B62F0(e,q);}}
