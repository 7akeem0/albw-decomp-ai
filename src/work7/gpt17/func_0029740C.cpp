#include "range.h"
struct Obj {u8 pad[0x164];u32 count,max;Interp**items;};extern bool func_0054030C(Obj*);extern void func_0010C7F8(Interp*,s32,f32);
Interp*get(Obj*p,u32 i){if(i<p->count)return p->items[i];return 0;}
void f_0029740C(Obj*p){s32 n=func_0054030C(p)?30:0;Interp*t=get(p,1);func_0010C7F8(t,n,1.f);}
