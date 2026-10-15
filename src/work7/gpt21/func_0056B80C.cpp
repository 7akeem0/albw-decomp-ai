#include "range.h"
struct S {u16 tag,pad2;s32 offset;};
void* f_56B80C(S*p){u32 v=p->tag;if(v){v-=0x220c;if(!v)return 0;if(v==1)return(char*)p+p->offset;}return 0;}
