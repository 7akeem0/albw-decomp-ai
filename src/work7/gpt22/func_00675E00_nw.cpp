#include "range.h"
struct State{u32 count;u8 current; void func_00658228(s32);};struct Actor{u8 pad[0x8bc];State state;};struct S{u32 pad;Actor* actor;};
void target(S* p){Actor* a=p->actor;if(a->state.current==1)a->state.func_00658228(4);}
