#include "range.h"
struct S { char pad[0x28]; u16 a,b; char pad2[2]; u8 flag; };
u16 f_55AEEC(const S* p) { return p->flag ? p->b : p->a; }
