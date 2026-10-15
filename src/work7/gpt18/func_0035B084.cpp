#include "range.h"
struct S{u32 a;};struct G{u8 pad[0x3dbbc];S list;};extern G*data_00706E20;extern "C" void func_0011F95C(void*,u32);extern "C" void func_0052FD7C(S*,void(*)(void*,u32),u32);extern "C" void func_0035B084(u32 a){G*const&g=data_00706E20;func_0052FD7C(&g->list,func_0011F95C,a);}
