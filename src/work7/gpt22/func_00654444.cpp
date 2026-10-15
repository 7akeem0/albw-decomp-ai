#include "range.h"
struct Sub;struct Arg{u32 x;};struct S{u8 pad[0x48];Sub* sub;Arg arg;};
extern "C" void func_003A9BC8(Sub*,const Arg&);
void target(S* p){if(p->sub)func_003A9BC8(p->sub,p->arg);}
