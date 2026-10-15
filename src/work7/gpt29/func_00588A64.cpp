#include "range.h"
struct Child588A { u32 pad0; char sub[0x18]; u32 count; };
struct Owner588A { char pad0[0x24]; Child588A* child; };
extern void* func_00409F74(void*,u32);
void* f_00588A64(Owner588A* p,u32 index) { Child588A* c=p->child;u32 count=c->count;if(index>=count)return 0;return func_00409F74(c->sub,index+0x4000000); }
