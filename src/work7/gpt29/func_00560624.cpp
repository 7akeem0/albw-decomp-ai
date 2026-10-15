#include "range.h"
struct Source5606{char pad0[0xc];u32 index;s8 value;};struct Dest5606{char pad0[0x1418];SafeSlots<void*,16> slots;};extern void func_002C349C(void*,s32);
void f_00560624(Source5606*p,Dest5606*target){u32 i=p->index;Dest5606*d=target;s32 v=p->value;void*c=d->slots[i];if(c)func_002C349C(c,v);}
