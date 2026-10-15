#include "range.h"
struct Sub;struct Arg{u32 x;};struct S{u8 pad[0x48];Sub* sub;Arg arg;};
extern "C" void func_0034B1C0(Sub*,const Arg&);
void target(S* p){if(p->sub)func_0034B1C0(p->sub,p->arg);}
