#include "../../work6/gpt13/en218.h"
struct Actor;struct Timeline{void func_00352210(bool,f32);};
struct SM{typedef void(Actor::*Func)();u32 counter;s8 cur,next;u8 num;char pad[9];Timeline* timeline;Actor*owner;Func*enter;Func*exec;Func*exit;
void func_0066085C(int) ;
void execute(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(f32)counter);}};
struct V3S{static void s(Vec3*v,f32 f){for(int i=0;i<3;i++)(&v->x)[i]=f;}};
struct Actor{char p[0x3e0];f32 m3e0;char p3e4[0x4e4-0x3e4];Vec3 m4e4;char p4f0[0x500-0x4f0];u32 m500;char p504[0x8bc-0x504];SM state;char p8e0[0x8fc-0x8e0];u16 m8fc;};
void func_004FB0D8(Actor*,f32*);
bool func_004F70A8(Actor*);bool func_004F8998(Actor*,int,int);void func_004F48F0(Actor*);void func_004F5588(Actor*);void func_004F5BD8(Actor*,int,int);
void func_0026C25C(Actor*o){V3S::s(&o->m4e4,1.1f);if(func_004F70A8(o)){if(o->state.cur!=1&&o->state.cur!=2&&func_004F8998(o,0,0))o->state.func_0066085C(1);o->state.execute();func_004FB0D8(o,&o->m3e0);func_004F48F0(o);func_004F5588(o);o->m500=0xf49f4900;func_004F5BD8(o,0,0);if(o->m8fc)o->m8fc--;}}
