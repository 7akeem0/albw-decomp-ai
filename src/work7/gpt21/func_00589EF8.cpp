#include "range.h"
struct Sub{char pad[0x164-0x74];u32 flags;};struct Child{char pad[0x74];Sub sub;};struct S{char pad[0xd4];Child*child;};Sub*f(S*p){Child*c=p->child;if(!c)return 0;c->sub.flags|=0x40000000;return &c->sub;}
