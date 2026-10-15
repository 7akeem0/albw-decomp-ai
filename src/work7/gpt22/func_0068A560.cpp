#include "range.h"
void target(Vec3*out,const Vec3*a,const Vec3*b,f32 t){out->x=a->x+(b->x-a->x)*t;out->y=a->y+(b->y-a->y)*t;out->z=a->z+(b->z-a->z)*t;}
