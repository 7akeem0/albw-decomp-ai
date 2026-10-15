#include "range.h"
struct Npc006149EC:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc006149EC(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc006149EC::Npc006149EC(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
