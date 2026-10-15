#include "range.h"
struct Obj40D{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();u8 pad4[0x10-4];void*list;u8 pad14[0x99-0x14];u8 value;};extern "C" void func_0011224C(void*,void*);
void func_0040D970(Obj40D*p,u8 n){p->value=n;if(p->list)func_0011224C(p->list,p);p->v9();}
