#include "_t/npc_hdr.h"
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
extern "C" void func_004CEAF0(void*);
struct NpcExec30 {u8 pad0[0x40c]; NpcExecState30 state; void* m430; void* m434;};

void target(NpcExec30*p){p->state.execute();if (p->m434) { func_00169A80(p->m434); func_00168E9C(p->m434, p->m430, 0); };func_004CEAF0(p->m430);}
