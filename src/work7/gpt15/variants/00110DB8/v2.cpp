#include "../../range.h"
struct S{char a[0x24];void*p;char b[0xcc];u32 max,count;char c[0xd];u8 flag;};extern "C" void func_00110DDC(void*,s32);extern "C" void func_00110DB8(S*p,s32 v){if(p->flag)p->flag=0;p->count=0;p->max=0xffffff;func_00110DDC(p->p,v);}

