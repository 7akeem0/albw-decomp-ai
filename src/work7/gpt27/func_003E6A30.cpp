#include "range.h"
struct Arena {u8*start;u32 cursor,size;u8 flag;void clear();void setFlag(u8);};void Arena::clear(){cursor=0;}void Arena::setFlag(u8 f){flag=f;}void func_003E6A30(Arena*p,u8*start,u32 size,u8 flag){u8*aligned=(u8*)(((u32)start+3)&~3u);start+=size;p->start=aligned;p->setFlag(flag);p->clear();p->size=((u32)(start-aligned))&~7u;}
