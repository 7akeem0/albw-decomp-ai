#include "range.h"
struct S {char pad[0x96];u8 active;char gap[9];s32 count;};
void f_0040D9C8(S* p,s32 n){p->count=n;p->active=n>0;}
