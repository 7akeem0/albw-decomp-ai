#include "range.h"
struct S{u16 tag;u16 pad;s32 offset;};
void* f_56ABC4(S*p){return p->tag==0x300?(char*)p+p->offset:0;}
