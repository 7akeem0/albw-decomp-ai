#include "../../range.h"
struct Timer{u32 cur,max;f32 rate;void start(u32 n,u32 z=0){max=n;rate=n?1.0f/n:1.0f;cur=z;}};struct S{u8 pad[0x968];Timer timer;u8 other;u8 flag;void func_004FC07C(s32,s32,s32);void func_0012A0EC();};void S::func_0012A0EC(){timer.start(300);flag=0;func_004FC07C(5,-1,0);}
