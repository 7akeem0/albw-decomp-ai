#include "range.h"
struct O{};typedef void(O::*Fn)(s32);struct S{u32 count;s8 current,next;u8 pad6[0xe];O*owner;Fn*enter;Fn*execute;Fn*exit;};void target(S*p,s32 a){s32 n=a;if(p->current!=-1){if(p->exit[p->current])(p->owner->*p->exit[p->current])(n);}}
