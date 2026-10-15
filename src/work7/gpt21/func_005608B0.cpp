#include "range.h"
struct S{char pad[0xc];u32 a;f32 x;u32 b;};extern void*data_00711F50;extern void func_004EB8B8(void*,u32,f32,u32);
void f_5608B0(S*p){u32 a=p->a;u32 b=p->b;f32 x=p->x;func_004EB8B8(data_00711F50,a,x,b);}
