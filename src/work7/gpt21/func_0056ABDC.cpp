#include "range.h"
struct S{char pad[8];u16 tag,padA;s32 offset;};
void* f_56ABDC(S*p){if(p->tag!=0x101)return 0;return (char*)p+p->offset;}
