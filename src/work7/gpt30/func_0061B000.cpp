#include "range.h"
struct Npc0061B000:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc0061B000(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc0061B000::Npc0061B000(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
