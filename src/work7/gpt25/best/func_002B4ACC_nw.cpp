#include "../range_types.h"
struct Obj2B4ACC{char pad[0x8ec];char state[0x48];CounterPair25 counter;};
extern "C"  void func_00662638(void*,s32);
extern "C" void f_002B4ACC(Obj2B4ACC*p){if(!p->counter.isEnd()){++p->counter.cur;return;}func_00662638(p->state,3);}
