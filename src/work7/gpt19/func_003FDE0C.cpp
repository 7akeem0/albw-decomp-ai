#include "range.h"
struct Obj3F {u8 pad[0x24];u32 member;};
extern "C" void func_003FDE18(void*,u32,u32,u32);
void f_003FDE0C(Obj3F* p,u32 a,u32 b){func_003FDE18(&p->member,a,b,0);}
