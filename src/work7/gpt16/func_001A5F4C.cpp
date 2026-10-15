#include "range.h"
extern void func_004FC07C(void*,s32,s32,s32);void copy(Vec3*d,const Vec3&s){*d=s;}void f1A5F4C(Obj1A5F4*p,s32 n){if(n!=3)return;func_004FC07C(p,5,-1,0);Vec3*d=&p->saved;copy(d,p->pos);}
