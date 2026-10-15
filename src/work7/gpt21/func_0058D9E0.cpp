#include "range.h"
struct Child{char pad[0xd];u8 a,b;};struct S{char pad[0xf4];Child*child;};bool isZero(const Child*p){return p->a==0 && p->b==0;}bool f(S*p){return !isZero(p->child);}
