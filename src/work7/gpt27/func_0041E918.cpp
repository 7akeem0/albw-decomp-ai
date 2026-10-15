#include "range.h"
struct Slot41E {u32 a,b;};struct Output41E {s32*ptr;Output41E(s32*p):ptr(p){}};
struct Obj41E {u8 pad[0x610];Slot41E*base;Output41E output;};
void func_0041E918(Obj41E*p,Slot41E*q){Output41E*out=&p->output;if(out->ptr){const u32&zero=0;Slot41E*base=p->base;*out->ptr=q-base;*out=Output41E((s32*)zero);}}
