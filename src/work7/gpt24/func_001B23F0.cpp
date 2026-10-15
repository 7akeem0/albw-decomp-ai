#include "range.h"
struct Object1B23 {char pad[0x8bc];u32 state;u8 current;};
struct HitMessage1B23;
extern bool func_004F7A60(Object1B23*,const HitMessage1B23*);
extern void func_0065B158(void*,s32);
bool target(Object1B23*p,const HitMessage1B23*m){bool r=func_004F7A60(p,m);if(p->current==7)func_0065B158(&p->state,11);return r;}
