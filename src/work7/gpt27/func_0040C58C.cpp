#include "range.h"
struct Holder40C5;struct Owner40C5{u8 pad[0x114];Holder40C5*holder;};struct Holder40C5{Owner40C5*owner;};
void func_0040C58C(Holder40C5*p){if(p->owner){if(p->owner->holder==p)p->owner->holder=0;if(p->owner)p->owner=0;}}
