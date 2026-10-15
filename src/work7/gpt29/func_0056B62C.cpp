#include "range.h"
struct Entry56B6{s32 offset;u32 a,b;};struct Table56B6{u32 count,reserved;Entry56B6 entries[1];};struct Owner56B6{u32 pad0;s32 offset;};
void*f_0056B62C(Owner56B6*p,s32 i){if(i==-1)return 0;Table56B6*t=(Table56B6*)((char*)p+p->offset);if(!t)return 0;return(char*)t+t->entries[i].offset;}
