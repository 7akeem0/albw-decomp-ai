#include "range.h"
struct Obj {u8 pad[0x478];Vec3 first,second;s8 mode;};
void copy(Vec3*d,const Vec3*s){*d=*s;}
void f_003253F0(Obj*p){copy(&p->first,&p->second);if((u32)p->mode<4)p->mode=(p->mode+2)&3;else p->mode=-1;}
