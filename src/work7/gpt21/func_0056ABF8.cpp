#include "range.h"
struct S{u16 tag;char gap[2];s32 offset;};
void* f_56ABF8(S* p){if(p->tag!=16640)return 0;return (char*)p+p->offset;}
