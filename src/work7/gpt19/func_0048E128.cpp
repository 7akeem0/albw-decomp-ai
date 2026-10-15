#include "range.h"
struct Pair {u32 a,b;};struct S {char pad[0x1d8];u32 first;Pair range;};
void f_0048E128(S* p,u32 a,u32 b,u32 c){p->first=a;a+=b;Pair range={a,a+c};p->range=range;}
