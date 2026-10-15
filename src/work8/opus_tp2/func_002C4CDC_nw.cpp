#include "../../work6/gpt13/en218.h"
struct Actor;struct Timeline{void func_00352210(bool,f32);};
struct SM{typedef void(Actor::*Func)();u32 counter;s8 cur,next;u8 num;char pad[9];Timeline* timeline;Actor*owner;Func*enter;Func*exec;Func*exit;
void func_0065DC84(int) ;
void execute(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(f32)counter);}};
struct Actor{char p[0x8bc];SM state;};
bool func_004F70A8(Actor*);bool func_004F8998(Actor*,int,int);void func_004F48F0(Actor*);void func_004F5588(Actor*);void func_004F5BD8(Actor*,int,int);void func_004FB0D8(Actor*,void*);
void func_00218AA0(Actor*o){if(func_004F70A8(o)){if(o->state.cur!=2&&o->state.cur!=3&&func_004F8998(o,0,0))o->state.func_0065DC84(2);o->state.execute();func_004FB0D8(o,(char*)o+0x3e0);func_004F48F0(o);func_004F5588(o);func_004F5BD8(o,0,0);}}
