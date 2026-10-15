#include "range.h"
struct Linked15BA24{char pad[0x8bc];u32 state;u8 mode;};
struct Obj15BA24{char pad[0xe60];u32 sub;};
extern bool func_0036BE78(u32*);
extern Linked15BA24*func_00161178(Obj15BA24*);
extern void func_0065836C(u32*,s32);
void action15BA24(Linked15BA24*q,s32 state){if(q->mode!=22)func_0065836C(&q->state,state);}
void phase15BA24(Obj15BA24*p,s32 state){Linked15BA24*q=func_00161178(p);if(q)action15BA24(q,state);}
extern "C" void target(Obj15BA24*p){if(func_0036BE78(&p->sub))phase15BA24(p,4);}
