#include "range.h"
struct Sub{char pad[0x28];u32 values[1];};
struct Child{char pad[0x40c];Sub sub[1];};
struct S{char pad[0x10];Child*child;};
u32 f_55696C(const S*p,u32 i){Sub*s=p->child->sub;return s->values[i];}
