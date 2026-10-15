#include "range.h"
struct Object22AB {char pad[0x8fc];u32 state;char pad900[0x968-0x900];u32 timer;};
extern bool func_0036BE48(void*);
extern void func_0065E8B8(void*,s32) ;
void target(Object22AB*p){if(func_0036BE48(&p->timer))func_0065E8B8(&p->state,5);}
