#include "range.h"
void set(VecCtor16*p,f32 x,f32 y,f32 z){p->x=x;p->y=y;p->z=z;}
void f_001566B4(Obj1566*p){set(&p->pos,p->source.x,3,p->source.z);set(&p->velocity,0,-0.6f,0);}
