#include "../range_types.h"
struct Obj2D0618{char pad[0x444];void*first;u32 unused;void*second;char gap[0x4cc-0x450];s32 state;};
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_00151148(void*,s32);
extern "C" void f_002D0618(Obj2D0618*p){func_004CF478(p->first,0,0);func_00151148(p->second,0);p->state=2;}
