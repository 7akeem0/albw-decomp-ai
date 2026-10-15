#include "range.h"
struct S{char pad[0xc];Vec3 value;};struct D{char pad[0x23c8];Vec3 value;};
void f_55C42C(const S*p,D*d){Vec3* q=&d->value;const Vec3*s=&p->value;*q=*s;}
