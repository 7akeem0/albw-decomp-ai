#include "range.h"
struct Npc0062BCCC:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc0062BCCC(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc0062BCCC::Npc0062BCCC(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
