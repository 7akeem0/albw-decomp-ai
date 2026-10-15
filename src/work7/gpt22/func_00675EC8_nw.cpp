#include "range.h"
struct Sub{u32 pad;u8 flag;};struct State{void func_0065D8B8(s32);};struct Actor{u8 pad[0x510];Sub*sub;u8 pad514[0x8bc-0x514];State state;};struct S{u32 pad;Actor*actor;};extern "C" void func_004F8DF4(Actor*,s32);void target(S*p){Actor*a=p->actor;if(a->sub->flag)func_004F8DF4(a,0);a->state.func_0065D8B8(5);}
