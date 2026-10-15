#include "range.h"
extern void func_00115C8C(Vec3*,const Vec3&,const Vec3&);
void dirty(Sub151* s){s->dirty=1;}
void f151150(Transform151* p,const Vec3& a){Sub151* s=p->m1c;dirty(s);Vec3* d=(Vec3*)(s->value+0x30);func_00115C8C(d,a,p->scale);}
