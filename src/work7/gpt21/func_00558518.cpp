#include "range.h"
struct S{char pad[0xc];u32 name;char pad10[0x38-0x10];u32 arg;};extern void* data_00711F50;extern void func_004E9D3C(void*,const u32*,u32);
void f_558518(S*p){func_004E9D3C(data_00711F50,&p->name,p->arg);}
