#include "range.h"
struct EventManager30;
extern EventManager30*data_007142C8;
extern "C" bool func_0058D6D0(EventManager30*);
extern "C" void func_0051C8D0(EventManager30*);
struct ActorManager30{u8 opaque[4];};
struct GameActors30{u8 pad0[0x3dbbc];ActorManager30 actors;};
struct ActorTimerSub30{u8 pad0[0xc8];u16 timer;};
struct ActorTimer30{u8 pad0[0x400];ActorTimerSub30 sub;};
extern "C" ActorTimer30*func_0052FBA0(ActorManager30*,u32);
struct NpcEvent30{u8 pad0[0x9bc];u32 id;u8 pad9c0[0x11];u8 enabled;u8 pad9d2;u8 state;};
extern "C" void func_006261EC(NpcEvent30*);
void target(NpcEvent30*p){
    if(!func_0058D6D0(data_007142C8))func_0051C8D0(data_007142C8);
    if(p->enabled){GameActors30*g=reinterpret_cast<GameActors30*>(data_00706E20);if(g){ActorTimer30*a=func_0052FBA0(&g->actors,p->id);if(a)a->sub.timer=30;}}
    p->state=0;func_006261EC(p);
}
