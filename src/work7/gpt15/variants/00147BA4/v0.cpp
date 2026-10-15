#include "../../range.h"
struct Timer{u32 cur,max;float rate;void start(u32 n,u32 c=0){max=n;rate=n?1.0f/n:0.0f;cur=c;}};struct S{char pad[0x490];Timer t;};extern "C" void func_00147BA4(S*p){p->t.start(360);}
