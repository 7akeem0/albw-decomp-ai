#include "range.h"
struct S { char pad0[0xc]; f32 a; char pad10[0xd4c-0x10]; f32 b; };
f32 f_548CB4(const S* p) { return p->a+p->b; }
