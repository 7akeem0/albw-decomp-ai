#include "range.h"
struct Obj {u8 pad[0x8c8];u32 timer;u8 unknown;s8 mode;};extern void func_004FC07C(Obj*,s32,s32,s32);
void f_00267B50(Obj*p){if(p->mode==18)p->timer=30;else if(p->mode==5)return;func_004FC07C(p,0,-1,0);}
