#include "range.h"
struct Child{char pad[0x368];Vec3 origin;char pad2[0x3d0-0x374];Vec3 pos;};
struct S{char pad[0x10];Child*child;};
extern void func_00115C70(Vec3*,const Vec3&,const Vec3&);
void f_5569A4(S*p,Vec3*out){S*self=p;Vec3*d=out;Child*c=self->child;const Vec3*a=&c->pos;const Vec3*b=&c->origin;return func_00115C70(d,*a,*b);}
