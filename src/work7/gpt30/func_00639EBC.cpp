#include "range.h"
struct Npc00639EBC:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc00639EBC(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc00639EBC::Npc00639EBC(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
