#include "../../work7/gpt30/npc_exec136.h"
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
struct NpcX {u8 pad0[0x788];NpcExecState30 state;u8 pad[0x7c4-0x788-sizeof(NpcExecState30)];void* m7c4;void* m7c8;u8 pad7cc[5];u8 m7d1;
  void upd(){if(m7d1){func_00169A80(m7c8);func_00168E9C(m7c8,m7c4,0);}}};
void target(NpcX*p){p->state.execute();p->upd();}
