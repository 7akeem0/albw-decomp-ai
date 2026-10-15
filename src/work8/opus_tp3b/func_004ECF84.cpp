#include "_t/npc_hdr.h"
struct NpcExec30 {u8 pad0[0x568];NpcExecState30 state;void func_006526AC();};
void target(NpcExec30*p){p->state.execute();p->func_006526AC();}
