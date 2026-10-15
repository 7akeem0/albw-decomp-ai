#include "range.h"
struct S{char pad[0x18];u16 tag;u16 pad1a;s32 offset;};void*f(S*p){if(p->offset!=-1 && p->tag==0x2210)return(char*)p+p->offset;return 0;}
