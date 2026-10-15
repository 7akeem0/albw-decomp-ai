#include "range.h"
struct Npc006241FC:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc006241FC(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc006241FC::Npc006241FC(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
