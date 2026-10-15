#include "ladder_types.h"
struct Sub4B96 {char pad[0xc];u32 mc;};
struct Object4B96 {char pad[0x58];Sub4B96 sub;};
extern void func_002C0028();
extern void func_0049F434(Sub4B96*,u32,void(*)());
void func_004B96F0(Object4B96* p) {Sub4B96* s=&p->sub;func_0049F434(s,s->mc,func_002C0028);}
