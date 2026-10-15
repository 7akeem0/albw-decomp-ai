#include "ladder_types.h"
struct T{char pad[0x3c4];void*value;};
struct C{char pad[0x24];T*target;};
struct O{char pad0[0x10];C*child;char pad14[0x14];u32 sub;char pad2c[0x26c];u8 flag;};
static void setT(T*t,void*v){if(t)t->value=v;}
void f_004C8DE8(O*p,bool on){p->flag=1;if(on){void*v=&p->sub;setT(p->child->target,v);}}
