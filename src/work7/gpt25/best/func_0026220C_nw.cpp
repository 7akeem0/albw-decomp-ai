#include "../range_types.h"
struct Obj2622 {char pad[0x8bc];u32 state;char gap[0x24];CounterPair25 timer;};
extern "C"  void func_0066034C(u32*,s32);
extern "C" void f_0026220C(Obj2622*p){if(p->timer.isEnd())func_0066034C(&p->state,0);}
