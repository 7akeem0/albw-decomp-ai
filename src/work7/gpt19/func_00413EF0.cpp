#include "range.h"
struct S {char pad[0x20];u16 flags;char gap[0xa];u8 value;};
void f_00413EF0(S* p,u8 v){if(p->value!=v){p->value=v;p->flags|=8;}}
