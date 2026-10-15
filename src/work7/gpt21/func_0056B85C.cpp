#include "range.h"
struct S{u16 tag,pad;s32 offset;};void*f(S*p){u32 v=p->tag;if(v){v-=0x220c;if(v==0)return(char*)p+p->offset;}return 0;}
