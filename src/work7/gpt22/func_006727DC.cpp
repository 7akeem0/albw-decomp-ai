#include "range.h"
struct Flags{u32 v;void change(u32 m,bool on){if(on)v|=m;else v&=~m;}void set(u32 m){change(m,true);}};struct S{u8 pad[0x2e0];Flags base;u8 pad2e4[0x59c-0x2e4];Flags f;u8 pad5a0[0x908-0x5a0];u8 a,b;u8 pad90a[0x98e-0x90a];u8 c;};void target(S*p,s32 n){p->base.change(2,false);p->f.set(0x100);p->f.set(0x30);if(n!=8){p->f.set(0x80);p->b=1;p->c=0;p->a=1;}}
