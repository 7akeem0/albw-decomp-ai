#include "../range_types.h"
struct StateData2923 {u16 kind;u16 pad;u8 flag;};
struct Obj2923 {char pad[0x48];void*states;};
extern "C" StateData2923* func_002D55D0(void*,s32);
extern "C" bool f_002923F8(Obj2923*p,u8 n){StateData2923*s=func_002D55D0(p->states,126);if(s){s->flag=n;s->kind=155;}return true;}
