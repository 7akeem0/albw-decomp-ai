#include "range.h"
struct Child {virtual s32 call();};
struct Obj {u8 pad[0x14];Child*child;u8 gap[0xae-0x18];u8 flag;void set(u8 n){flag=n;}};
s32 invoke(Child*q){if(q)return q->call();return 0;}
s32 f_002FCD28(Obj*p){s32 r=invoke(p->child);p->set(0);return r;}
