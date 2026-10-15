#include "range.h"
struct Child{char pad[0x30];u8 flag;};struct S{char pad[0x7a0];Child*child;};extern u32 func_005839C4(S*);u32 f(S*p){u32 v=func_005839C4(p);if(v==0xb && !p->child->flag)v=0;return v;}
