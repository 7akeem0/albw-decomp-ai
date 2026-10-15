#include "range.h"
struct S{u16 current,kind;u32 reserved,target;void func_002313DC(u32);};struct O{char pad[0x1c];u32 value;char gap[0x3c];S state;};void func_00376690(O*p,u32 a){p->state.target=p->value;const u16& z=0;const u16& n=2;p->state.kind=n;p->state.current=z;p->state.func_002313DC(a);}
