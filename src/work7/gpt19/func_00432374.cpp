#include "range.h"
struct S{char pad[0x34];Vec3 min,max;};void fill(Vec3*p,f32 v){p->x=v;p->y=v;p->z=v;}
void f_00432374(S*p){fill(&p->min,3.402823466e38f);fill(&p->max,-3.402823466e38f);}
