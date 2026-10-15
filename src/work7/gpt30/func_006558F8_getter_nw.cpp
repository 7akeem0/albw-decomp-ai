#include "range.h"
struct Controller30{u32 pad0;u8 active;u8 getActive()const;};
struct StateView30{u8 opaque[0x24];};
struct ActorState30{u8 pad0[0x508];s16 count;u8 pad50a[6];Controller30*controller;u8 pad514[0x8f0-0x514];StateView30 state;};
extern "C" void func_00660AE4(StateView30*,s32);
extern "C" void func_003931EC(StateView30*,s8);
extern "C"  void func_00660B50(StateView30*);
void change(ActorState30*p,s32 n){func_00660AE4(&p->state,n);func_003931EC(&p->state,(s8)n);func_00660B50(&p->state);}
void target(ActorState30*p){if(!p->controller->getActive()){if(p->count<=0)change(p,9);else change(p,0);}}

