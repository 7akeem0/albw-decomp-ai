#include "range.h"
struct Child58AC{char pad0[0x88];f32 value;};struct Owner58AC{char pad0[0x410];Child58AC*child;};
bool f_0058AC9C(Owner58AC*p){Child58AC*c=p->child;if(c)return c->value>0.f;return false;}
