#include "_t/npc_hdr.h"
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
struct NpcExec30 {u8 pad0[0x420]; NpcExecState30 state; void* m444; u8 p448[0x458-0x448]; void* m458; void func_006526AC();};

void target(NpcExec30*p){p->state.execute();func_00169A80(p->m444);NpcExec30*s2=p;func_00168E9C(s2->m444, s2->m458, 0);s2->func_006526AC();}
