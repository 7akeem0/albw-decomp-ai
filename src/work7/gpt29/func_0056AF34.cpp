#include "range.h"
struct Entry56AF{s32 offset;u32 reserved;};struct Table56AF{u32 count,reserved;Entry56AF entries[1];};struct Owner56AF{char pad0[0x34];s32 offset;};
void*f_0056AF34(Owner56AF*p,u32 id){Table56AF*t=(Table56AF*)((char*)p+p->offset);id&=0x00ffffff;if(t->count>id)return(char*)t+t->entries[id].offset;return 0;}
