#include "range.h"
struct S{char pad[16];u16 tag;char gap[2];s32 offset;};
void* f_56AC10(S* p){if(p->tag!=257)return 0;return (char*)p+p->offset;}
