#include "range.h"
struct TDC9 {u32 cur,max;f32 rate;void start(u32 n,u32 c=0){max=n;if(n)rate=1.f/n;else rate=0;cur=c;}};
struct ODC9 {u8 pad[0x4f0];TDC9 timer;};
extern "C" void func_0039DC90(ODC9*p){p->timer.start(60);}
