#include "range.h"
struct Timer{u32 cur,max;f32 rate;void start(u32 n,u32 zero=0){max=n;rate=n?1.f/n:0.f;cur=zero;}};struct O{char pad[0x20];Timer timer;u32 reserved;u32 state;};void f(O*p,u32 n){switch(n){case 0:break;case 1:p->timer.start(120);break;default:break;}p->state=n;}
