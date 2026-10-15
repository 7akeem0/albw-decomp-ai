#include "range.h"
struct Req{char pad[0xc];u32 index;s8 value;};struct Child{char pad[0x11d];u8 value;};struct Owner{char pad[0x1418];Child*items[16];};void f(Req*p,Owner*q){u32 i=p->index;s32 v=p->value;Child**a=q->items;if(i<16)a+=i;Child*t=*a;if(t)t->value=v;}
