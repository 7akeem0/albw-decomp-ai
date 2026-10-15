#include "../../range.h"
struct Timer{u32 current,max;f32 rate;void start(u32 n,u32 z=0){max=n;if(n==0)rate=0.0f;else rate=1.0f/n;current=z;}};struct S{u8 pad30[0x30];s16 frames;u8 pad32[0x43c-0x32];Timer timer;};extern "C" void func_00137D30(S*p){Timer*t=&p->timer;t->start((u32)p->frames);}
