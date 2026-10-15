#include "range.h"
struct Child{u32 m0,m4;};
struct S{u8 pad[0x24];Child* m24;};
extern "C" void func_00409F74(void*,u32);
void f_00409F64(S* p){func_00409F74(&p->m24->m4,0x4000000);}
