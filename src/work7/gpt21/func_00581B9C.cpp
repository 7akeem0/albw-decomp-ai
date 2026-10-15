#include "range.h"
struct Child{char pad[0x15b54];u32 flags[1];};struct S{char pad[0x38];Child*child;};bool f(S*p){Child*c=p->child;if(!c)return false;u32*a=c->flags;return *a!=0;}
