#include "range.h"
struct Pair{u32 cur,max;};struct O{char pad[0x9f0];Pair timer;};extern void func_00667258(void*,s32) ;void f(O*p){Pair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00667258((char*)p+0x98c,2);}
