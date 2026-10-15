#include "range.h"
struct Mtx34_30 { f32 m[3][4]; };
void f_0068B134(Mtx34_30* p,const Vec3* scale,const Vec3* translation) {
    p->m[0][0]=scale->x;p->m[1][0]=0;p->m[2][0]=0;
    p->m[0][1]=0;p->m[1][1]=scale->y;p->m[2][1]=0;
    p->m[0][2]=0;p->m[1][2]=0;p->m[2][2]=scale->z;
    p->m[0][3]=translation->x;p->m[1][3]=translation->y;p->m[2][3]=translation->z;
}
