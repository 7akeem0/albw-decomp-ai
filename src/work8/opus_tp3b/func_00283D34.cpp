#include "_t/npc_hdr.h"
struct NpcExec30 {u8 pad0[0x8b4]; f32 m8b4; u8 p8b8[0x960-0x8b8]; NpcExecState30 state; u8 p984[0x9f1-0x984]; u8 m9f1;
  void func_004BC8D8();void func_004C00F4();};
void target(NpcExec30*p){NpcExec30*self=p; self->state.execute(); if (self->m9f1 == 1) self->m8b4 = 0.01f; self->func_004BC8D8(); self->func_004C00F4();}
