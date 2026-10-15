#include "range.h"
struct S {char pad[0x18];Flag32 flags;char gap[0x7e];u8 active;};
void f_0044F480(S* p){p->active=0;p->flags.reset(0x40);}
