#include "range.h"
struct Child;struct Obj {u8 pad[0x40c];Child*child;u8 pad410[0x420-0x410];Child*other;};extern Child*func_0054D964(Obj*,s32);extern void func_004356B4(Child*);
void f_003249E0(Obj*p,s32 i){Child*&c=p->child;if(!p->child){p->child=func_0054D964(p,i);func_004356B4(p->child);p->other=c;}}
