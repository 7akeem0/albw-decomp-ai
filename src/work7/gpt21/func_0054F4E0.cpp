#include "range.h"
struct S{char pad[0x14];u8 mode;char pad15[3];u32 count;};bool f(S*p){return p->mode==1 && p->count>=0x78u;}
