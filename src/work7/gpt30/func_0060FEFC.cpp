#include "range.h"
struct Npc0060FEFC:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc0060FEFC(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc0060FEFC::Npc0060FEFC(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
