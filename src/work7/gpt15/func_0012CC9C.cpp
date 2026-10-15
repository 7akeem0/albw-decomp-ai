#include "range.h"
struct S{char pad[0x8c];u8 flag;};extern "C" void func_002317C0(void*,float);extern "C" void func_0012CC9C(S*p){p->flag=0;func_002317C0((char*)p+0x38,1.0f);}
