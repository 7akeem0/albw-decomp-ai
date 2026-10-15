#include "range.h"
struct S{char pad[0xc];u32 sub;char gap[0x250];u8 first,second;};extern void func_0041134C(void*,u32);
void f_00413060(S*p){if(!p->second){p->first=0;p->second=1;func_0041134C(&p->sub,0);}}
