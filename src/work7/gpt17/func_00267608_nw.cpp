#include "range.h"
struct Obj {u8 pad[0x3e0];f32 vy;u8 pad3e4[0x8c8-0x3e4];u32 state;};extern f32 func_004F898C();extern void func_004F8964(f32*,bool,f32);extern bool func_0058A8F0(Obj*);extern void func_00660718(u32*,s32) ;
void f_00267608(Obj*p){func_004F8964(&p->vy,true,func_004F898C());if(func_0058A8F0(p))func_00660718(&p->state,7);}
