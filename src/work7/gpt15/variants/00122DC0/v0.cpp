#include "../../range.h"
struct Child{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void run();};extern "C" void func_00122E08(void*);
struct S{u8 pad20[32];Child*a,*b;u8 pad28[0x216c-0x28];u32 member;};extern "C" void func_00122DC0(S*p){if(p->a)p->a->run();if(p->b)p->b->run();func_00122E08(&p->member);}
