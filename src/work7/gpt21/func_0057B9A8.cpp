#include "range.h"
struct S{char pad[0x74];s32 count;u8 mode;};bool f(S*p){return p->mode==2 && p->count>=0x4b;}
