#include "range.h"
struct V{f32 x,y;};struct O{char pad[8];V*child;char gap[0x30-12];u32 state;char gap34[0x54-0x34];f32 value,previous;};extern void func_003C2554(O*);void f(O*p){if(p->state==3){p->state=1;p->child->y-=p->value;p->previous=p->value;func_003C2554(p);}}
