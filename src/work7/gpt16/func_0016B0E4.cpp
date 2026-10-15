#include "range.h"
inline Entry16B0*at16B(Obj16B0*p,u32 n){Entry16B0*a=p->items;return n<51?&a[n]:a;}void f16B0E4(Obj16B0*p,u32 n,void*,const Vec3&v){Entry16B0*e=at16B(p,n);e->pos.x=v.x;e->pos.y=v.y;e->pos.z=v.z;}
