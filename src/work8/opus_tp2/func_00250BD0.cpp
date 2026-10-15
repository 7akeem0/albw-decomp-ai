#include "../../work7/gpt30/npc_exec136.h"
struct NpcX {u8 pad0[0x41c];NpcExecState30 state;u8 pad[0x4a4-0x41c-sizeof(NpcExecState30)];u32 m4a4;u32 func_002507E0();void inc(){m4a4++;}};
u32 target(NpcX*p){p->state.execute();u32 r=p->func_002507E0();p->inc();return r;}
