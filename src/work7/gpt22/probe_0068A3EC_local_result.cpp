#include "range.h"
extern "C" f32 sqrtf(f32);
bool target(Vec3*p,f32 length){f32 sum=p->x*p->x+p->y*p->y+p->z*p->z;f32 norm=sqrtf(sum);bool result;if(norm>0){f32 scale=length/norm;result=true;p->x*=scale;p->y*=scale;p->z*=scale;}else result=length==0;return result;}
