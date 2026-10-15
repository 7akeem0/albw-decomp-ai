#include "range.h"
extern "C" bool func_0058D6D0(WorldManager22*);
extern "C" void func_0051C8D0(WorldManager22*);
extern "C" void func_0061EE20(NpcState22*);
void target(NpcState22*p){if(!func_0058D6D0(data_007142C8))func_0051C8D0(data_007142C8);if(p->flag9d1&&data_00706E20){FoundActor22*actor=func_0052FBA0(&data_00706E20->actors,p->id9bc);if(actor)actor->cooldown=30;}p->state9d3=0;func_0061EE20(p);}
