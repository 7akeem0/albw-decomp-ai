#include "range.h"
struct Flag{u32 v;void change();};void Flag::change(){v|=2;}struct Timer{u32 cur,max;f32 rate;void start(u32 n,u32 z=0){max=n;rate=n?1.f/n:0.f;cur=z;}};struct O{char pad[0x2e0];Flag flags;char gap[0x474-0x2e4];Timer timer;};bool f(O*p){p->flags.change();p->timer.start(600);return true;}
