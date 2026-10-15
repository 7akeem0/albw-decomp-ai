#include "range.h"
struct Block {u8 pad[0xc0];u16 count;};
struct Obj{u8 pad[0xec];u32 ctl;u8 gap[0x200-0xf0];Block block;void inc(){++block.count;}void go();};
extern void func_004F5494(u32*);extern void func_006624F4(Obj*,s32);
void f_002AB948(Obj*p){u32*ctl=&p->ctl;++p->block.count;func_004F5494(ctl);func_006624F4(p,0);}
