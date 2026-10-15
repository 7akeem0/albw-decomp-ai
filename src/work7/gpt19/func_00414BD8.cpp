#include "range.h"
struct S {char pad[0x17];s8 value;char gap[8];u16 flags;};
void f_00414BD8(S* p,s8 v){if(p->value!=v){p->value=v;p->flags|=2;}}
