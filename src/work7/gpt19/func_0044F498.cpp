#include "range.h"
struct Pair {u32 a,b;};struct S {char pad[0x8c];u32 a,b;char gap[4];u8 flag;};
void f_0044F498(S* p,u8 flag,const Pair* v){p->flag=flag;p->a=v->a;p->b=v->b;}
