#include "range.h"
struct Npc00618444:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc00618444(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc00618444::Npc00618444(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
