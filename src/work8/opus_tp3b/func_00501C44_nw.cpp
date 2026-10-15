#include "../../work6/gpt13/en218.h"
struct Actor;struct Timeline{void func_00352210(bool,f32);};
struct SM{typedef void(Actor::*Func)();u32 counter;s8 cur,next;u8 num;char pad[9];Timeline* timeline;Actor*owner;Func*enter;Func*exec;Func*exit;
void func_0065DC84(int) ;
void execute(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(f32)counter);}};
struct Actor{char p[0x8bc];SM state;char p8e0[0xa64-0x8e0];u32 ma64;u8 ma68;};
bool func_004F70A8(Actor*);bool func_004F8998(Actor*,int,int);void func_004F48F0(Actor*);void func_004F5588(Actor*);void func_004F5BD8(Actor*,int,int);
void func_005017EC(Actor*,int);
void func_00501C44(Actor*o){if(func_004F70A8(o)){if(o->state.cur!=1&&o->state.cur!=2&&func_004F8998(o,0,0))o->state.func_0065DC84(1);o->state.execute();func_004F48F0(o);o->ma64=0;o->ma68=0;func_004F5588(o);func_004F5BD8(o,0,0);}func_005017EC(o,0);}
