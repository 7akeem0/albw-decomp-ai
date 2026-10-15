#include "ladder_types.h"
struct Sub4B98 {char pad[0xc];u32 mc;};
struct Object4B98 {char pad[0x48];Sub4B98 sub;};
extern void func_0060B5D4();
extern void func_0049F434(Sub4B98*,u32,void(*)());
void func_004B989C(Object4B98* p) {Sub4B98* s=&p->sub;func_0049F434(s,s->mc,func_0060B5D4);}
