#include "range.h"
struct Obj414 {void* items[7];u32 last;};extern void func_003E14A0(void*,u32);
void func_00414490(Obj414* p,s32 i,u32 n,bool remember){func_003E14A0(p->items[i],n);if(remember)p->last=n;}
