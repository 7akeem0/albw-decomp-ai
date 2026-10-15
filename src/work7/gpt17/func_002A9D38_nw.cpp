#include "range.h"
struct Child {u32 reserved;u8 flag;};struct CountBlock {u32 a,b;s16 count;u8 reserved[6];Child*child;};struct Obj {u8 pad[0x500];CountBlock block;u8 pad514[0x8bc-0x514];u32 state;};extern void func_006623B0(u32*,s32) ;
void f_002A9D38(Obj*p){if(p->block.child->flag)return;CountBlock*b=&p->block;if(b->count<=0)func_006623B0(&p->state,3);else func_006623B0(&p->state,0);}