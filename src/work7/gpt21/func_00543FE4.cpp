#include "range.h"
struct Child{char pad[0x74];u32 sub;char pad78[0x164-0x78];u32 flags;};struct S{char pad[0x2c];Child*child;};
u32* f_543FE4(S*p){Child*c=p->child;if(!c)return 0;c->flags|=0x40000000;return &c->sub;}
