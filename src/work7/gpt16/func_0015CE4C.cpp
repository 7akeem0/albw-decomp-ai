#include "range.h"
void f_0015CE4C(Obj15CE4*p,Arg15CE*a,Vec3*out){if(a&&out){if(!p->saved)p->saved=a->value;*out=p->pos;a->value=p->saved+p->delta;}}
