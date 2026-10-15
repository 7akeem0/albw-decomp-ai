#include "range.h"
struct Child { char pad[0x16c]; s8 value; };
struct S { char pad[0x80]; Child* child; };
s8 f_58DEA4(const S* p) { return p->child ? p->child->value : 0; }
