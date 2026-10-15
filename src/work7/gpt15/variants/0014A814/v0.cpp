#include "../../range.h"
struct S{char pad[0x1c];void*p;u8 a;s8 flag;};extern "C" void func_00103198(void*,int);extern "C" void func_0014A814(S*p,s8 v){if(p->flag!=v){p->flag=v;func_00103198(p->p,v);}}
