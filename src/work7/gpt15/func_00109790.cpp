#include "range.h"
struct S{u32 pad;u8 flag;char pad5[0x24-5];u32 value;};struct T{u32 pad;u32 value;};extern "C" void func_00109790(S*p,const T*q){p->value=q->value;p->flag=1;}
