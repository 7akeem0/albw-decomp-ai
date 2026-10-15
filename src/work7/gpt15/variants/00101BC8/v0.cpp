#include "../../range.h"
struct S{char pad[0x9b9];u8 f;};struct G{u32 a,b;void*p;};extern G data_00711DE8;extern "C" void func_00102130(void*);extern "C" void func_00101BC8(S*p){if(p->f)func_00102130(data_00711DE8.p);}
