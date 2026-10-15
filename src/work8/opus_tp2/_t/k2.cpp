#include "../../../work7/gpt30/npc_exec136.h"
struct NpcX {u8 pad0[0x34c];u32 m34c;u8 pad350[0x361-0x350];u8 m361;u8 pad362[0x7a0-0x362];u32 m7a0;u8 pad7a4[0x960-0x7a4];NpcExecState30 state;
  void func_004BCAA8();void func_0031080C();void func_004BC8D8();};
void target(NpcX*p){u32 v=p->m7a0;p->m34c=v;p->m361=1;p->state.execute();p->func_004BCAA8();p->func_0031080C();p->func_004BC8D8();}
