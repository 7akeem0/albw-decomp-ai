#include "../../work7/gpt16/range.h"
extern void func_00115C70(Vec3*,const Vec3&,const Vec3&);extern u32 func_0068C690(const Vec3&);
void f_0017BDA8(Obj17BD*p,OwnerPos*q){if(q){Vec3 v;Vec3* d=&v;const Vec3& a=q->pos;d->setSub(a,p->pos);p->flag=1;p->angle=func_0068C690(v);}}
