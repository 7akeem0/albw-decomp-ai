#include "range.h"
struct Obj {u32 unknown;u32*a;u32 b;u32*c;u32 d;u32*e;};struct Output {u32 opaque[9];};
struct Count{s32 v;Count(s32 n):v(n){}};extern void func_00432EC0(Output*,u32*,u32*,u32*,Count,u32);void f_002C1720(Obj*p,Output*out,u32 arg){u32*a=p->a;u32*c=p->c;u32*e=p->e;func_00432EC0(out,a,e,c,Count(90),arg);}
