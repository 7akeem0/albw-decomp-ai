#include "../../work7/gpt30/range.h"
struct ExecOwner30;
typedef void(ExecOwner30::*ExecMethod30)();
struct Timeline30 {void func_00352210(bool,f32);};
struct NpcExecState30 {
    u32 frame;s8 current,previous;u8 pad6[2];u32 count;void* names;
    Timeline30* timeline;ExecOwner30*owner;ExecMethod30*enter;ExecMethod30*exec;ExecMethod30*exit;
    void execute(){
        (owner->*exec[current])();
        ++frame;
        if(timeline)timeline->func_00352210(true,static_cast<f32>(frame));
    }
};
struct Sub998 { u32 v; };
struct NpcExec30 {u8 pad0[0x960];NpcExecState30 state;u8 pad[0x998-0x960-sizeof(NpcExecState30)]; Sub998 m998; u8 m99c;
  void func_004BC8D8();void func_004C15EC(Sub998*);};
void target(NpcExec30*p){NpcExec30*self=p; self->state.execute(); if (self->m99c) self->func_004C15EC(&self->m998); self->func_004BC8D8();}
