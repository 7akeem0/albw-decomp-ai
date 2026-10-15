#include "range.h"
struct E{char pad[0x50];};struct O{char pad[0x9c];s32 count;E*data;};extern void func_0031B438(E*,u32,u32,u32);void f(O*p,s32 i,u32 a,u32 b){if(i>=0&&i<p->count){E*e=p->data;if((u32)i<(u32)p->count)e=&p->data[i];func_0031B438(e,a,b,0);}}
