#include "range.h"
struct S {char pad[0x133];u8 flag;char gap[0x2c];f32 value;u32 zero,count;};
void f_0041CACC(S* p,f32 v,u32 count,u8 flag){p->value=v;p->count=count;p->zero=0;p->flag=flag;}
