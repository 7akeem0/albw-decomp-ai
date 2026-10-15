#include "range.h"
struct S{char pad[0x28];u32 v;};extern void* data_00712F70;extern "C" void func_0049F76C(void*,u32);extern "C" void func_0014A9B4(S*p,u32 v){p->v=v;func_0049F76C(data_00712F70,v);}
