#include "range.h"
struct Timer {u32 cur,max;f32 rate;void start(u32 n,u32 c=0){max=n;rate=n?1.0f/n:0.0f;cur=c;}};
struct Obj {u8 pad[0x40c];Timer timer;};extern void func_0027EA34(Obj*,void*);
void f_0027EA00(Obj*p,void*arg){func_0027EA34(p,arg);p->timer.start(15);}
