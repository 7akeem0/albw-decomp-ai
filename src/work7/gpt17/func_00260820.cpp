#include "range.h"
struct Obj{virtual void v0();virtual void v1();virtual void v2();virtual u32 v3();u8 pad[0x30];u32 value;u32 query();};
u32 Obj::query(){return v3();}
void f_00260820(Obj*p){p->value=~0u;p->value=p->query();}