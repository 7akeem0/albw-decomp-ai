#include "../range_types.h"
struct StateData28F7 {u16 kind;u16 pad;u8 flag;};
struct Obj28F7 {char pad[0x48];void*states;};
extern "C" StateData28F7* func_002D55D0(void*,s32);
extern "C" bool f_0028F7EC(Obj28F7*p){StateData28F7*s=func_002D55D0(p->states,126);if(s){s->kind=83;s->flag=0;}return true;}
