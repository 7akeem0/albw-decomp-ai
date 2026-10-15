#include "range.h"
struct A{char pad[0x38];u16 count;};struct B{char pad[0xe];u8 flag;};struct S{char pad[0x74];A*a;char gap[0x64];B*b;};
void f_004411D0(S*p){B*q=p->b;if(q && !p->a->count)q->flag=1;}
