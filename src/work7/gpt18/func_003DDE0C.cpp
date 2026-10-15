#include "range.h"
struct AudioState{u8 enabled;char pad[3];f32 gain,scale;};extern char bss_007A06F0[];extern void func_003DEBDC(void*,f32);inline void apply(AudioState*p,f32 v,f32 q){p->gain=v;func_003DEBDC(bss_007A06F0,v*q);}void f(AudioState*p,f32 v){if(p->enabled)apply(p,v,p->scale);}
