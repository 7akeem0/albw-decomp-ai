#include "_t/npc_hdr.h"
struct NpcExec30 {u8 pad0[0x40c]; NpcExecState30 state; u8 p430[4]; u32 m434; u8 p438[0x49c-0x438]; Vec3 m49c; void func_006526AC(); void func_0014E2A0(u32, Vec3*, u32, u32, u32);};

void target(NpcExec30*p){p->state.execute();p->func_0014E2A0(p->m434, &p->m49c, 0x4000, 0, 0);p->func_006526AC();}
