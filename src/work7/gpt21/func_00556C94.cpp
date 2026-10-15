#include "range.h"
struct Sub { u16 a,value; };
struct Child { char pad[0x50c]; Sub sub[1]; };
struct S { char pad[0x10]; Child* child; };
u16 f_556C94(const S* p) { Sub* s=p->child->sub; return s->value; }
