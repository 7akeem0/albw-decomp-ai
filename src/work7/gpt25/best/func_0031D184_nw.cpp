#include "../range_types.h"
struct Obj31D1 {char pad[0x10];u32 state;char gap[0x38];CounterPair25 counts;};
extern "C"  void func_0066552C(u32*,s32);
extern "C" void f_0031D184(Obj31D1*p){CounterPair25 t=p->counts;if(t.cur<t.max){p->counts.cur=t.cur+1;return;}func_0066552C(&p->state,2);}
