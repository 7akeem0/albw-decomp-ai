#include "range.h"
struct Sub { char pad[0xf0]; u16 value; };
struct Child { char pad[0x40c]; Sub sub[1]; };
struct S { char pad[0x10]; Child* child; };
u16 f_5568D4(const S* p) { Sub* s=p->child->sub; return s->value; }
