#include "range.h"
struct Target55C4 {char pad0[0x9d];s8 flag;};
struct Source55C4 {char pad0[0xc];u32 index;s8 value;};
struct Dest55C4 {char pad0[0x18a4];SafeSlots<Target55C4*,4> slots;};
void f_0055C448(Source55C4*p,Dest55C4*d){u32 i=p->index;s32 v=p->value;Target55C4*t=d->slots[i];if(t)t->flag=v;}
