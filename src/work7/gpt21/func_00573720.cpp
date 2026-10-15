#include "range.h"
struct Child{char pad[0x54];u32 a;char pad58[0x64-0x58];u32 b;};struct S{char pad[0x10c];Child*child;};struct Pair{u32 a,b;};
void f_573720(S*p,Pair*out){Child*c=p->child;out->a=c->a;out->b=c->b;}
