#include "range.h"
struct Npc0062EA7C:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc0062EA7C(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc0062EA7C::Npc0062EA7C(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
