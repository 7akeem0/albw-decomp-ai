#include "range.h"
struct S{u32 a;Vec3 pos;char gap[0x24];u32 box;char gap2[0x20];f32 radius;};extern  void func_0068B294(void*,const Vec3*,f32,f32,f32);
void f_00432F48(S*p){f32 n=p->radius*2;func_0068B294(&p->box,&p->pos,n,n,n);}
