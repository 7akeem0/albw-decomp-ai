#include "range.h"
struct O{};typedef void(O::*Fn)();
struct S{u32 count;s8 current,next;u8 pad6[0xe];O*owner;Fn*exit;Fn*execute;Fn*enter;};
void target(S*p){if(p->exit[p->current])(p->owner->*p->exit[p->current])();}
