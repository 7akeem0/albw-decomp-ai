#include "range.h"
struct Object1C7E {char pad[0x430];u32 state;char pad434[0x454-0x434];u32 cur,max;};
extern void func_0065C088(void*,s32) ;
void target(Object1C7E*p){if(!advanceEnd24(p->cur,p->max))return;func_0065C088(&p->state,5);}
