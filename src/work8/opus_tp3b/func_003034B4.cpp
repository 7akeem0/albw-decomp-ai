#include "_t/npc_hdr.h"
extern "C" void func_004CEAF0(void*);
struct NpcExec30 {u8 pad0[0x47c]; void* m47c; u8 p480[0x498-0x480]; NpcExecState30 state;void func_001E4158(); void func_00303420();};
void target(NpcExec30*p){NpcExec30*s=p; s->state.execute(); s->func_001E4158(); NpcExec30*s2=p; s2->func_00303420(); func_004CEAF0(s2->m47c);}
