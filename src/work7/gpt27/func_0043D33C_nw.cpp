#include "range.h"
struct State43D3{u32 current;u8 mode;};struct Obj43D3{u8 padd[0xd];s8 a,b;u8 padf[0x74-0xf];State43D3 state;};
extern "C"  void func_0066C424(State43D3*,s32);
void func_0043D33C(Obj43D3*p){if(p->a!=3||p->b!=3)return;if(p->state.mode!=5)return;func_0066C424(&p->state,0);}
