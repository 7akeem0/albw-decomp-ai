#include "npc_reset152.h"
void target(NpcReset30*p,bool play){
    NpcTimer80030*b=reinterpret_cast<NpcTimer80030*>(reinterpret_cast<u8*>(p)+0x800);
    b->speed=0.0f;
    if(play)p->request(p->id853,-1);
    if(b->mode)b->timer=0;
    else b->timer=data_007124F0->random.below(150)+150;
    if(p->randomKind!=255)b->secondary=data_007124F0->random.below(300)+100;
}
