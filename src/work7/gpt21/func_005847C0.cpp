#include "range.h"
struct Child{char pad[0x28];u32 value;};struct S{char pad[0x51c];Child*child;};extern u32*data_00712510;
u32* f_5847C0(S*p){return p->child?&p->child->value:data_00712510;}
