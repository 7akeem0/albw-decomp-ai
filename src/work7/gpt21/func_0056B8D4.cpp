#include "range.h"
struct S {char pad[0xc];u16 tag;};
u32 f_56B8D4(S*p){u32 v=p->tag;v-=0x2201;if(v==0)return 2;if(v==1)return 3;if(v!=2)return 0;return 1;}
