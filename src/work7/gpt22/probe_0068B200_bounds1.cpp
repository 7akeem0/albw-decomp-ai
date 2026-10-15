#include "range.h"
struct Bounds22{Vec3 minimum,maximum;};
inline f32 minimum22(const f32&a,const f32&b){return a>b?b:a;}
inline f32 maximum22(const f32&a,const f32&b){return a>b?a:b;}
void target(Bounds22*p,const Vec3*v){p->minimum.x=minimum22(p->minimum.x,v->x);p->minimum.y=minimum22(p->minimum.y,v->y);p->minimum.z=minimum22(p->minimum.z,v->z);p->maximum.x=maximum22(p->maximum.x,v->x);p->maximum.y=maximum22(p->maximum.y,v->y);p->maximum.z=maximum22(p->maximum.z,v->z);}
