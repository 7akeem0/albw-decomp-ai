#include "range.h"
struct S {char pad[0x20];u16 flags;char gap[0xb];u8 value;};
void f_00413FC0(S* p,u8 v){if(p->value!=v){p->value=v;p->flags|=8;}}
