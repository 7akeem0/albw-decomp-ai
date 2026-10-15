#include "range.h"
struct S { char pad[0x6d0]; u32 a; char pad2[0x734-0x6d4]; u32 b; };
u32* f_55A3C8(S* p,s32 i) { return i ? &p->a : &p->b; }
