#include "range.h"
extern  void func_0065F050(void*,s32);
struct Child23E0{u8 pad[0xd];u8 a,b;};struct Owner23E0{u8 pad[0x788];u32 state;u8 gap[0x48];Child23E0*child;};
void f_0023E0AC(Owner23E0*p){if(p->child&&!p->child->a&&!p->child->b)func_0065F050(&p->state,0);}
