#include "range.h"
struct Npc006328B4:ActorBase30 {
    StateMgr30 state;
    s32 initialState;
    Npc006328B4(ActorParam30*,s32,s32,const NpcInitParam30&);
};
Npc006328B4::Npc006328B4(ActorParam30* arg,s32 initial,s32 kind,const NpcInitParam30& init)
    :ActorBase30(arg,kind,init),state(),initialState(initial){}
