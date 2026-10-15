#include "range.h"
struct Arg{u8 pad[0xe];u16 mE;};
struct S{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void call(Arg*,u32,u16);};
void f_003FE298(S* p,Arg* a,u32 b){p->call(a,b,a->mE);}
