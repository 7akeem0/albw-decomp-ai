#include "range.h"
extern void func_00115C8C(Vec3*,const Vec3&,const Vec3&);
void finish(Obj1511* const& p,Vec3* d){func_00115C8C(d,p->model->value,p->scale);}
void f151358(Obj1511* p){Sub151* s=p->sub;Vec3* d=(Vec3*)(s->value+0x30);s->dirty=1;finish(p,d);}
