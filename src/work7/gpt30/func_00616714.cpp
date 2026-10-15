#include "range.h"
struct Npc00616714:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc00616714(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc00616714::Npc00616714(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
