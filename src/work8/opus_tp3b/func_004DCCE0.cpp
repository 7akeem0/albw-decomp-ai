#include "_t/npc_hdr.h"
struct NpcExec30 {u8 pad0[0x960]; NpcExecState30 state; void func_004BCAA8(); void func_004BD784(f32, f32); void func_004BC8D8();};

void target(NpcExec30*p){p->state.execute();p->func_004BCAA8();if (p->state.current >= 6 && p->state.current <= 8) p->func_004BD784(1.0f, -0.25f);p->func_004BC8D8();}
