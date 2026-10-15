#include "range.h"
struct Child{char pad[0x44];u8 flags;};struct S{char pad[0x48];Child*child;};
bool f_54C850(const S*p){if(!p->child)return false;if(p->child->flags&1)return true;return false;}
