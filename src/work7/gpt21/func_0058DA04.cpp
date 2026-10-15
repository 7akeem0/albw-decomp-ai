#include "range.h"
struct Child{char pad[0xd];u8 a,b;};struct S{char pad[0xf4];Child*child;};bool f(S*p){return p->child->a==3 && p->child->b==3;}
