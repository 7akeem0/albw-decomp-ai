#include "range.h"
struct Child{u32 flags;};struct S{char pad[0x14];Child*child;};
bool f_54C9F0(const S*p){u32 f=p->child->flags;if(f&0x10)return true;if(f&8)return true;if(f&2)return true;return false;}
